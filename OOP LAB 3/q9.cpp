#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    float price;
    int quantity;

public:

    void accept()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Cost: " << price * quantity << endl;
    }

    float getCost()
    {
        return price * quantity;
    }
};

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    // Dynamic allocation
    Product *products = new Product[n];

    // Input
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Product " << i + 1 << " details:\n";
        products[i].accept();
    }

    // Display
    cout << "\n--- Shopping Cart ---\n";

    float total = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << endl;

        products[i].display();

        total += products[i].getCost();
    }

    cout << "\nTotal Cart Amount = " << total << endl;

    // Release memory
    delete[] products;
    products = nullptr;

    return 0;
}