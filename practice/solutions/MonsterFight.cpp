#include <iostream>
#include <ostream>
#include <string>

class Monster {
public:
    Monster(std::string name, double hp, double damage, double defense)
        : name(name), hp(hp), damage(damage), defense(defense) {}

    bool isAlive() { return hp > 0; }

    void takeDamageFrom(Monster other) {
        double newDamage = other.damage - defense;
        if (newDamage <= 0) {
            return;
        }
        hp -= newDamage;
    }

private:
    std::string name;
    double hp;
    double damage;
    double defense;

    friend std::ostream &operator<<(std::ostream &stream,
                                    const Monster &monster);
};

std::ostream &operator<<(std::ostream &stream, const Monster &monster) {
    stream << monster.name << '[' << "hp: " << monster.hp
           << ", damage: " << monster.damage << ", defense: " << monster.defense
           << ']';
    return stream;
}

Monster buildMonster() {
    std::string name;
    double hp, damage, defense;

    std::cout << "Monster name: ";
    std::cin >> name;
    std::cout << "Monster health: ";
    std::cin >> hp;
    std::cout << "Monster damage: ";
    std::cin >> damage;
    std::cout << "Monster defense: ";
    std::cin >> defense;
    return Monster(name, hp, damage, defense);

}

int main() {
    std::cout << "Let's make your monster\n";
    Monster allied(buildMonster());
    std::cout << "Let's make your opponent's monster\n";
    Monster opponent(buildMonster());

    int turns;
    std::cout << "How many turns? ";
    std::cin >> turns;

    // allied goes first
    for (int i = 0; i < turns; i++) {
        opponent.takeDamageFrom(allied);
        if (!opponent.isAlive()) {
            std::cout << opponent << " dies on turn " << i + 1 << "!\n";
            std::cout << allied << " wins!\n";
            break;
        }
        allied.takeDamageFrom(opponent);
        if (!allied.isAlive()) {
            std::cout << allied << " dies on turn " << i + 1 << "!\n";
            std::cout << opponent << " wins!\n";
            break;
        }
    }

    return 0;
}
