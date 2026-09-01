#include <iostream>
using namespace std;

void updateStatus(int *status) {
    if (*status == 1)
        *status = 2;
    else if (*status == 2)
        *status = 3;
}

string getStatus(int status) {
    if (status == 1)
        return "Processing";
    else if (status == 2)
        return "Shipped";
    else if (status == 3)
        return "Delivered";
}

int main() {
    int status = 1;
    cout << "Before Update: " << getStatus(status) << endl;
    updateStatus(&status);
    cout << "After Update: " << getStatus(status) << endl;
    updateStatus(&status);
    cout << "After Shipment:" << getStatus(status) << endl;
    

    return 0;
}