// Write a C++ program to implement a class called Student that has private member
// variables for name, class, roll number, and marks. Include member functions to
// calculate the grade based on the marks and display the student's information.

#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    string student_class;
    int roll_number;
    float marks;

public:
    Student(string n, string c, int roll, float m)
    {
        name = n;
        student_class = c;
        roll_number = roll;
        marks = m;
    }

    string calculateGrade()
    {
        if (marks >= 90)
        {
            return "A+";
        }
        else if (marks >= 80)
        {
            return "A";
        }
        else if (marks >= 70)
        {
            return "B";
        }
        else if (marks >= 60)
        {
            return "C";
        }
        else
        {
            return "D";
        }
    }
    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Class: " << student_class << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main()
{
    Student s1("John Doe", "10th", 21, 78);
    Student s2("Alice Jonhson", "9th", 11, 86);
    Student s3("Lina Leo", "10th", 29, 57);
    Student s4("Bob Smith", "8th", 32, 67);

    cout << "Student Details: " << endl;
    cout << "==================================:" << endl;

    s1.display();
    cout << endl;
    s2.display();
    cout << endl;
    s3.display();
    cout << endl;
    s4.display();

    return 0;
}
