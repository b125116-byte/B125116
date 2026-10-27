
#include <iostream>
using namespace std;

class Robot {
public:
    virtual void move(double distance) {
        cout << "Robot is moving\n";
    }

    virtual ~Robot() {}
};

class WheeledRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Wheeled robot travel time: "
             << distance / 2 << " seconds\n";
    }
};

class TrackedRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Tracked robot travel time: "
             << distance / 1.2 << " seconds\n";
    }
};

int main() {
    WheeledRobot wheeled;
    TrackedRobot tracked;

    Robot* ptr;

    ptr = &wheeled;
    ptr->move(10);

    ptr = &tracked;
    ptr->move(10);

    return 0;
}
