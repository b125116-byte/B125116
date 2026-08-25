#include <iostream>
using namespace std;


void display(int x)
{
    cout << "Integer: " << x << endl;
}


void display(float x)
{
    cout << "Float: " << x << endl;
}


void display(char x)
{
    cout << "Character: " << x << endl;
}


void display(int arr[], int size)
{
    cout << "Integer array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}


void display(char arr[], int size)
{
    cout << "Character array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int a = 10;
    float b = 5.5;
    char c = 'A';

    int arr[] = {10, 20, 30, 40};
    char letters[] = {'A', 'B', 'C', 'D'};

    display(a);
    display(b);
    display(c);

    display(arr, 4);
    display(letters, 4);

    return 0;
}