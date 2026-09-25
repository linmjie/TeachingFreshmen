#include <iostream>

void askForWordsOfAffirmation(std::string name, bool isYourGirlfriend) {
    if (isYourGirlfriend) {
        std::cout << "You're doing such a good job " << name << "!" << std::endl;
    } else {
        std::cout << "Ew, get away from me, " << name << ", you creep!" << std::endl;
    }
}

bool askForFood(int meals, bool isYourGirlfriend) {
    if (isYourGirlfriend) {
        for (int i = 0; i < meals; i++) {
            std::cout << "Eat this!" << std::endl;
        }
        return meals >= 3;
    }
    std::cout << "I'm not giving you food!" << std::endl;
    return false;
}

int main() {
    bool askedOutYet = false;
    std::string name;
    std::cout << "To start, what is your name? ";
    std::getline(std::cin, name);
    std::cout << std::endl;
    while (true) {
        std::cout << "What do you want to do with the AI Girlfriend?" << std::endl;
        std::cout << "1. Ask out AI Girlfriend" << std::endl
                  << "2. Ask for words of affirmation" << std::endl
                  << "3. Ask for food" << std::endl;
        int choice;
        std::cin >> choice;
        std::cout << std::endl;
        switch (choice) {
            case 1:
                std::cout << "Okay! I'll be your girlfriend" << std::endl;
                askedOutYet = true;
                break;
            case 2:
                askForWordsOfAffirmation(name, askedOutYet);
                break;
            case 3:
                std::cout << "How many meals do you want? ";
                int meals;
                std::cin >> meals;
                if (askForFood(meals, askedOutYet)) return 0;
                break;
            default:
                std::cout << "Please choose a valid option" << std::endl;
        }
        std::cout << std::endl;
    }
}