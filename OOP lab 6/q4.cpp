#include <iostream>
using namespace std;

int main() {
    int seats[8] = {11,41,72,16,50,45,78,33};
    int pos, newSeat;

    cout << "Train Seats before correction: ";
    for (int i = 0; i < 8; i++) 
    {
        cout << *(seats + i) << endl;
    }

    cout << "Enter position to correct :";
    cin >> pos;

    cout << "Enter corrected seat number: ";
    cin >> newSeat;

    *(seats + pos) = newSeat;

    cout << "Train Seats after correction: ";
    for (int i = 0; i < 8; i++) 
    {
        cout << *(seats + i) << endl;
    }

    return 0;
}
