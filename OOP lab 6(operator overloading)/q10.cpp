#include <iostream>
using namespace std;

class Product {
    string name;
    float price;
    int quantity;

public:
    Product(string n = "", float p = 0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    // Overload +
    Product operator+(Product p) {
        if (name == p.name && price == p.price) {
            return Product(name, price, quantity + p.quantity);
        }

        cout << "Products are different and cannot be combined." << endl;
        return Product();
    }

    // Overload >
    bool operator>(Product p) {
        return (price * quantity) > (p.price * p.quantity);
    }

    void display() {
        cout << "Product: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }
};

int main() {
    Product p1("Laptop", 50000, 1);
    Product p2("Laptop", 50000, 2);

    // Addition
    Product p3 = p1 + p2;

    cout << "After combining:" << endl;
    p3.display();

    cout << endl;

    // Comparison
    if (p1 > p2)
        cout << "Product 1 has higher total value.";
    else if (p2 > p1)
        cout << "Product 2 has higher total value.";
    else
        cout << "Both products have equal total value.";

    return 0;
}