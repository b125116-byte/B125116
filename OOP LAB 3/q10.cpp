#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;
    float basicSalary;

    int numberOfMonths;
    float *monthlyEarnings;

public:

    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Number of Months: ";
        cin >> numberOfMonths;

        // Dynamic allocation
        monthlyEarnings = new float[numberOfMonths];

        cout << "Enter monthly earnings:\n";

        for (int i = 0; i < numberOfMonths; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> monthlyEarnings[i];
        }
    }

    void analyze()
    {
        float total = 0;
        float highest = monthlyEarnings[0];
        int highestMonth = 1;

        for (int i = 0; i < numberOfMonths; i++)
        {
            // Calculate total
            total += monthlyEarnings[i];

            // Find highest earning
            if (monthlyEarnings[i] > highest)
            {
                highest = monthlyEarnings[i];
                highestMonth = i + 1;
            }
        }

        float average = total / numberOfMonths;

        cout << "\n--- Employee Salary Analysis ---\n";
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;

        cout << "Total Earnings: " << total << endl;
        cout << "Average Monthly Earning: " << average << endl;
        cout << "Highest Earning: " << highest << endl;
        cout << "Highest Earning Month: " << highestMonth << endl;
    }

    ~Employee()
    {
        // Release dynamic memory
        delete[] monthlyEarnings;
        monthlyEarnings = nullptr;
    }
};

int main()
{
    Employee e;

    e.accept();
    e.analyze();

    return 0;
}