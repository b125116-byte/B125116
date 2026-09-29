#include <iostream>
using namespace std;

class Student {
    private :
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    bool operator > (Student s) {
        return marks > s.marks;
    }

    string getName() {
        return name;
    }

    int getMarks() {
        return marks;
    }
};

int main() {
    Student s1("Shree", 85);
    Student s2("Sweta", 78);

    if (s1 > s2)
        cout << s1.getName() << " has higher marks.";
    else if (s2 > s1)
        cout << s2.getName() << " has higher marks.";
    else
        cout << "Both students have equal marks.";

    return 0;
}