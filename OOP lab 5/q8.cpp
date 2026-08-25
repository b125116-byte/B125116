#include <iostream>
using namespace std;


int count(int n)
{
    if (n == 0)
        return 1;

    int digits = 0;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        digits++;
        n /= 10;
    }

    return digits;
}


int count(int arr[], int size)
{
    return size;
}


int count(char arr[], int size, char key)
{
    int occurrences = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            occurrences++;
    }

    return occurrences;
}

int main()
{
    int number = 12345;

    cout << "Number of digits = "
         << count(number) << endl;

    int arr[] = {10, 20, 30, 40, 50};

    cout << "Number of array elements = "
         << count(arr, 5) << endl;

    char letters[] = {'a', 'b', 'a', 'c', 'a'};

    cout << "Occurrences of 'a' = "
         << count(letters, 5, 'a') << endl;

    return 0;
}