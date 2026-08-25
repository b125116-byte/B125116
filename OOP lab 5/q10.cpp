#include <iostream>
using namespace std;

// Add two integers
int process(int a, int b)
{
    return a + b;
}

// Add integer and float
float process(int a, float b)
{
    return a + b;
}

// Add two floating-point values
float process(float a, float b)
{
    return a + b;
}

// Find sum of integer array
int process(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

// Add values pointed to by two pointers
int process(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a = 10, b = 20;

    cout << "Sum of two integers = "
         << process(a, b) << endl;

    float x = 5.5;

    cout << "Sum of integer and float = "
         << process(a, x) << endl;

    float y = 2.5;

    cout << "Sum of two floats = "
         << process(x, y) << endl;

    int arr[] = {10, 20, 30, 40};

    cout << "Sum of array = "
         << process(arr, 4) << endl;

    cout << "Sum using pointers = "
         << process(&a, &b) << endl;

    return 0;
}