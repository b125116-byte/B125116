#include <iostream>
using namespace std;

int main()
{
int battery = 70;
int *ptr = &battery;

cout << "Battery = "<< *ptr << "%" << endl;
*ptr = *ptr + 20;

cout << "Updated battery =" << *ptr << "%" << endl;

return 0;
}