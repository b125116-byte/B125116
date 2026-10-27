
#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual void calculateWater(double moisture) {
        cout << "Calculating water requirement\n";
    }
};

class DripIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        cout << "Drip irrigation water: " << 2 * (100 - moisture) << " litres\n";
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        cout << "Sprinkler irrigation water: " << 3 * (100 - moisture) << " litres\n";
    }
};

int main() {
    double moisture;
    cout << "Enter soil moisture (0-100): ";
    cin >> moisture;

    if (moisture < 0 || moisture > 100) {
        cout << "Invalid moisture percentage\n";
        return 0;
    }

    DripIrrigation drip;
    SprinklerIrrigation sprinkler;

    drip.calculateWater(moisture);
    sprinkler.calculateWater(moisture);

    return 0;
}
