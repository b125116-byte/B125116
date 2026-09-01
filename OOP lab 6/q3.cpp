#include <iostream>
using namespace std;

int main() {
    int equipment[6] = {100, 200, 300, 400, 450,500};

    int *ptr = equipment;

    for (int i = 0; i < 6; i++) {
        cout << "Equipment ID: " << *(ptr + i)<< endl;
        cout << "Address :" << (ptr + i) << endl;
        
    }

    return 0;
}