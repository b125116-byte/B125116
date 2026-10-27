
#include <iostream>
using namespace std;

class ParkingSlot {
public:
    virtual void calculateFee(int hours) {
        cout << "Parking fee calculation\n";
    }
};

class TwoWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override 
    {
        double fee = hours * 10;

        if (hours > 5)
            fee *= 0.90;

        cout << "Two-wheeler fee: Rs. " << fee << endl;
    }
};

class FourWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double fee = hours * 30;

        if (hours > 5)
            fee *= 0.90;

        cout << "Four-wheeler fee: Rs. " << fee << endl;
    }
};

int main() {
    TwoWheelerSlot two;
    FourWheelerSlot four;

    int hours;
    cout << "Enter parking hours: ";
    cin >> hours;

    two.calculateFee(hours);
    four.calculateFee(hours);

    return 0;
}
