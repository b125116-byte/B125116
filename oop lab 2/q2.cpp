#include<iostream>

using namespace std;

class Rectangle {
float length;
float breadth;
float area;
float perimeter;

public:
void rarea();
void rperimeter();

};

void Rectangle :: rarea(){
    cout<<"Enter length:\n";
    cin>> length;
    cout<<"Enter breadth:\n";
    cin>> breadth;
    area = length * breadth;
    cout << "The area of the rectangle is \n"<< area;

}

void Rectangle ::rperimeter(){
    perimeter = 2 * (length + breadth);
    cout<<"The perimeter of the rectangle is :\n"<< perimeter;

}

int main(){
    Rectangle r;
    r.rarea();
    r.rperimeter();
}