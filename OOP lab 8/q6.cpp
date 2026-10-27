
#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {
        cout << "Scanning for threats\n";
    }
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Basic scanner detected: " << threats << " threats\n";
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        int removed = threats * 90 / 100;
        int remaining = threats - removed;

        cout << "Advanced scanner detected: "<< threats << " threats\n";
        cout << "Threats remaining: " << remaining << endl;
    }
};

int main() {
    int threats;
    cout << "Enter number of detected threats: ";
    cin >> threats;

    if (threats < 0) {
        cout << "Invalid number of threats\n";
        return 0;
    }

    BasicScanner basic;
    AdvancedScanner advanced;

    basic.scan(threats);
    advanced.scan(threats);

    return 0;
}
