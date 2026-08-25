#include <iostream>
using namespace std;


void modify(int &a, int value)
{
    a = a + value;
}

void modify(float &a, float value)
{
    a = a + value;
}

void modify(int *a, int value, char)
{
    *a = *a + value;
}

int main()
{
    int a = 10;
    float b = 5.5;

    cout << "Integer before modification: " << a << endl;
    modify(a, 5);
    cout << "Integer after modification: " << a << endl;

    cout << "\nFloat before modification: " << b << endl;
    modify(b, 2.5f);
    cout << "Float after modification: " << b << endl;

    int c = 20;

    cout << "\nPointer integer before modification: " << c << endl;
    modify(&c, 10, 'p');
    cout << "Pointer integer after modification: " << c << endl;

    return 0;
}