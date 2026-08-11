#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;

    cout<<"Enter value:";
    cin>>*ptr;

    cout<<"Value:"<<""<<*ptr<<endl;

    delete ptr;


    return 0;
}