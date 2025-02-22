// Write a C++ program to implement a class called Employee that has private
// member variables for name, employee ID, and salary. Include member functions to
// calculate and set salary based on employee performance.

#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int empID;
    float salary;

public:
    Employee(string n, int id, float s)
    {
        name = n;
        empID = id;
        salary = s;
    }

    void setSalary(float performance)
    {
        salary = salary + salary * (performance / 100); // Increase salary based on performance %
    }

    void display()
    {
        cout << "Employee: " << name << endl;
        cout << "ID: " << empID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee emp("John Doe", 101, 24000);
    Employee emp1("Lina Leo", 110, 12000);

    cout << "Before Performance Review: " << endl;
    cout << "=================================: " << endl;
    emp.display();
    cout << endl;
    emp1.display();

    emp.setSalary(10); // 10% increase for good performance
    emp1.setSalary(4);

    cout << endl;
    cout << "After Performance Review: " << endl;
    cout << "=================================: " << endl;
    emp.display();
    cout << endl;
    emp1.display();

    return 0;
}