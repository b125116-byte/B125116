#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of contacts: "<<endl;
    cin >> n;

    long long *contacts = new long long[n];

    cout << "Enter contact numbers: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> *(contacts + i);
    }
    long long searchNumber;

    cout << "Enter contact number to search: "<<endl;
    cin >> searchNumber;
    long long *ptr = contacts;
    int position = 0;
    bool found = false;

    while (ptr < contacts + n) 
    {
        if (*ptr == searchNumber) 
        {
            found = true;
            break;
        }
        ptr++;
        position++;
    }

    if (found) 
    {
        cout << "Contact found at position: "<< position << endl;
    }
    else 
    {
        cout << "Contact not found." << endl;
    }

    delete[] contacts;
    contacts = nullptr;

    return 0;
}