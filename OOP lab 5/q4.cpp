#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int search(char arr[], int size, char key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}


int search(int arr[], int start, int end, int key)
{
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    char letters[] = {'a', 'b', 'c', 'd', 'e'};

    int pos = search(arr, 5, 30);

    if (pos != -1)
        cout << "30 found at position " << pos << endl;
    else
        cout << "30 not found" << endl;

    int charPos = search(letters, 5, 'c');

    if (charPos != -1)
        cout << "'c' found at position " << charPos << endl;
    else
        cout << "'c' not found" << endl;

    pos = search(arr, 1, 3, 40);

    if (pos != -1)
        cout << "40 found at position " << pos << endl;
    else
        cout << "40 not found in specified range" << endl;

    return 0;
}