#include <iostream>
using namespace std;


int maximum(int a, int b)
{
    return (a > b) ? a : b;
}


int maximum(int *a, int *b)
{
    return (*a > *b) ? *a : *b;
}


int maximum(int *arr, int size)
{
    int max = *arr;

    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > max)
            max = *(arr + i);
    }

    return max;
}

int main()
{
    int a = 10;
    int b = 20;

    cout << "Maximum of two integers = "
         << maximum(a, b) << endl;

    cout << "Maximum using pointers = "
         << maximum(&a, &b) << endl;

    int arr[] = {15, 25, 5, 40, 30};

    cout << "Maximum in array = "
         << maximum(arr, 5) << endl;

    return 0;
}