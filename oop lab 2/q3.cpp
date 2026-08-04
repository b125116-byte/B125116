#include<iostream>
using namespace std;

class Calculator{
int num1;
int num2;
int addition;
int subtraction;
int multiplication;
float division;

public:
void cadd();
void csub();
void cmulti();
void cdiv();
};

void Calculator::cadd(){
    cout<<"Enter num1\n";
    cout<<"Enter num2\n";
    cin>>num1;
    cin>>num2;
    addition = num1 + num2;
    cout<<"\nThe result:\n"<<addition;

}

void Calculator::csub(){
if(num1 > num2)
subtraction = num1 - num2;
cout<<"\nResult :\n"<< subtraction;


}

void Calculator::cmulti(){
    multiplication = num1 * num2;
    cout<< " \nResult :\n"<< multiplication;
}

void Calculator:: cdiv(){
    if (num2 != 0)
            cout << "Division = " << num1 / num2 << endl;
        else
            cout << "Division by zero is not possible." << endl;
}
 

int main(){
    Calculator c;
    c.cadd();
    c.csub();
    c.cmulti();
    c.cdiv();

    return 0;
}