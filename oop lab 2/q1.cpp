#include<iostream>
using namespace std;
class Student {
int roll;
string name;
int marks;

public: 
void sdetails();
};

void Student::sdetails(){
    cout<< "Enter student's roll no.:";
    cin>> roll;
    cin.ignore();// Removes the leftover '\n' 
    cout<<"Enter student's name:";
    getline(cin,name);
    cout<< "Enter student's marks:";
    cin>> marks;
    cout<<"\nStudent's details:\n";
    cout<<"\nStudent's roll:\n"<< roll;
    cout<<"\nStudent's name:\n"<< name;
    cout<<"\nStudent's marks:\n"<< marks;

}

int main(){
    Student s1;
    s1. sdetails();
    return 0;

}


