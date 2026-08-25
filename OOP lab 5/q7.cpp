#include <iostream>
using namespace std;


int compare(int a, int b)
{
    return (a > b) ? a : b;
}


float compare(float a, float b)
{
    return (a > b) ? a : b;
}

bool compare(int a[], int b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main()
{
    int a = 20, b = 10;

    cout << "Larger integer = " << compare(a, b) << endl;

    float x = 10.5, y = 20.5;

    cout << "Larger float = " << compare(x, y) << endl;

    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 3, 4};

    if (compare(arr1, arr2, 4))
        cout << "Both arrays are identical." << endl;
    else
        cout << "Arrays are different." << endl;

    return 0;
}