#include <ostream>
#include <string>

class Monster {
public:
    Monster(std::string name, double hp, double damage, double defense)
        : name(name), hp(hp), damage(damage), defense(defense) {}

    bool isAlive() {
        return hp > 0;
    }

    void hurt(Monster other) {
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

    friend std::ostream &operator<<(std::ostream &stream, Monster monster);
};

std::ostream &operator<<(std::ostream &stream, Monster monster) {
    return stream;
}
