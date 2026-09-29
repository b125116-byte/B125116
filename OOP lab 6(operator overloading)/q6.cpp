#include <iostream>
using namespace std;

class Counter {
    int value;

public:
    Counter(int v = 0) {
        value = v;
    }

    // Prefix ++c
    Counter operator++() {
        ++value;
        return *this;
    }

    // Postfix c++
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display() {
        cout << value;
    }
};

int main() {
    Counter c(5);

    cout << "Initial value: ";
    c.display();

    cout << endl;

    cout << "After prefix ++c: ";
    ++c;
    c.display();

    cout << endl;

    cout << "Before postfix c++: ";
    c.display();

    cout << endl;

    c++;

    cout << "After postfix c++: ";
    c.display();

    return 0;
}