#include <iostream>
using namespace std;

int calculate(int a, int b){
    return a + b;
}
int calculate (int a, int b, int c){
    return a + b + c;
}
float calculate(float a, float b){
    return a +b;
}

int main(){
    int a,b,c;
float x,y;
cout << "Enter two integers:";
cin >> a >> b;
cout << "Result =" << calculate(a,b) << endl;

cout << "\nEnter three integers :";
cin >> a>> b>> c;
cout <<"Result :" << calculate(a,b,c) << endl;

cout << "Enter two floating numbers :";
cin >> x>> y;
cout << "Result = " << calculate(x,y) << endl;

return 0;
}