
#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat {
public:
    virtual void calculateTarget(int firstInningsScore) {
        cout << "Calculating target\n";
    }
};

class T20Match : public MatchFormat {
public:
    void calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.01);
        int target = firstInningsScore + margin;

        cout << "T20 target score: " << target << endl;
    }
};

class ODIMatch : public MatchFormat {
public:
    void calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.02);
        int target = firstInningsScore + margin;

        cout << "ODI target score: " << target << endl;
    }
};

int main() {
    int score;
    cout << "Enter first innings score: ";
    cin >> score;

    if (score < 0) {
        cout << "Invalid score\n";
        return 0;
    }

    T20Match t20;
    ODIMatch odi;

    t20.calculateTarget(score);
    odi.calculateTarget(score);

    return 0;
}
