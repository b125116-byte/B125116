#include <iostream>
using namespace std;

class Character {
public:
    virtual void attack() {
        cout << "Character attacks\n";
    }
};

class Warrior : public Character {
    int strength;
public:
    Warrior(int s) : strength(s) {}

    void attack() override {
        cout << "Warrior damage: " << 20 + 2 * strength << endl;
    }
};

class Archer : public Character {
    int agility;
public:
    Archer(int a) : agility(a) {}

    void attack() override {
        cout << "Archer damage: " << 15 + 3 * agility << endl;
    }
};

int main() {
    Warrior w(10);
    Archer a(8);

    w.attack();
    a.attack();

    return 0;
}
