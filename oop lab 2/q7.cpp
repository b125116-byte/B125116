#include <iostream>
using namespace std;

class Product {
private:
    int productID, quantity;
    string productName;
    float price;

public:
    void input() {
        cout << "Enter Product ID: ";
        cin >> productID;
        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price per Unit: ";
        cin >> price;
    }

    void sell() {
        int sold;
        cout << "Enter quantity sold: ";
        cin >> sold;

        if (sold <= quantity)
            quantity -= sold;
        else
            cout << "Not enough stock!\n";
    }

    void display() {
        cout << "\nProduct Details\n";
        cout << "Product ID   : " << productID << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Quantity     : " << quantity << endl;
        cout << "Price        : " << price << endl;
        cout << "Inventory Value = " << quantity * price << endl;
    }
};

int main() {
    Product p;
    p.input();
    p.sell();
    p.display();
    return 0;
}