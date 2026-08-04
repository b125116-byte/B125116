#include <iostream>
using namespace std;

class Distance {
private:
    int feet, inches;

public:
    void input() {
        cout << "Enter Feet: ";
        cin >> feet;
        cout << "Enter Inches: ";
        cin >> inches;
    }

    Distance add(Distance d) {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if (temp.inches >= 12) {
            temp.feet += temp.inches / 12;
            temp.inches %= 12;
        }

        return temp;
    }

    void display() {
        cout << feet << " ft " << inches << " in" << endl;
    }
};

int main() {
    Distance d1, d2, d3;

    cout << "Enter First Distance\n";
    d1.input();

    cout << "Enter Second Distance\n";
    d2.input();

    d3 = d1.add(d2);

    cout << "Total Distance = ";
    d3.display();

    return 0;
} 