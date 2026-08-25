#include <iostream>
using namespace std;

int total(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

float total(float arr[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}


int total(int arr[], int size, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    float b[] = {1.5, 2.5, 3.5, 4.5};

    cout << "Integer array total = "
         << total(a, 5) << endl;

    cout << "Floating-point array total = "
         << total(b, 4) << endl;

    cout << "First 3 integer elements total = "
         << total(a, 5, 3) << endl;

    return 0 ;
}