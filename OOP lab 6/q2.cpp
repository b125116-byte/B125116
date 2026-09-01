#include<iostream>
using namespace std;

int main(){
    int level = 20;
    int *ptr = &level;
    cout << "The water level :" << *ptr << "litre" << endl;
    *ptr = *ptr + 50;
    *ptr = *ptr - 30;
    cout << "The final water level:" << *ptr << "litre" << endl;

    return 0;
}