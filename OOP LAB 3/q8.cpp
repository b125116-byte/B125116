#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNumber;
    string name;
    int numberOfSubjects;
    float *marks;

public:

    void accept()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Number of Subjects: ";
        cin >> numberOfSubjects;

        // Dynamic allocation for marks
        marks = new float[numberOfSubjects];

        cout << "Enter marks:\n";

        for (int i = 0; i < numberOfSubjects; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void display()
    {
        float total = 0;

        for (int i = 0; i < numberOfSubjects; i++)
        {
            total += marks[i];
        }

        float average = total / numberOfSubjects;

        cout << "\n--- Student Result ---\n";
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;

        cout << "Marks: ";

        for (int i = 0; i < numberOfSubjects; i++)
        {
            cout << marks[i] << " ";
        }

        cout << "\nTotal Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }

    ~Student()
    {
        // Release dynamically allocated marks
        delete[] marks;
        marks = nullptr;
    }
};

int main()
{
    Student s;

    s.accept();
    s.display();

    return 0;
}