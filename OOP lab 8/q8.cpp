
#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual void calculateCost(double cpuHours) {
        cout << "Calculating cloud cost\n";
    }
};

class StandardInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 5;

        if (cpuHours > 100)
            cost *= 0.85;

        cout << "Standard instance cost: Rs. "
             << cost << endl;
    }
};

class PremiumInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 12;

        if (cpuHours > 100)
            cost *= 0.85;

        cout << "Premium instance cost: Rs. "
             << cost << endl;
    }
};

int main() {
    double cpuHours;
    cout << "Enter CPU usage in hours: ";
    cin >> cpuHours;

    if (cpuHours < 0) {
        cout << "Invalid CPU hours\n";
        return 0;
    }

    StandardInstance standard;
    PremiumInstance premium;

    standard.calculateCost(cpuHours);
    premium.calculateCost(cpuHours);

    return 0;
}
