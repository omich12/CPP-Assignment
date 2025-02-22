// Write a C++ program to create a class called Triangle that has private member
// variables for the lengths of its three sides. Implement member functions to
// determine if the triangle is equilateral, isosceles, or scalene.

#include <iostream>

using namespace std;

class Triangle
{
private:
    float side1, side2, side3;

public:
    Triangle(float a, float b, float c)
    {
        side1 = a;
        side2 = b;
        side3 = c;
    }

    void determineType()
    {
        if (side1 == side2 && side2 == side3)
        {
            cout << "Equilateral Triangle" << endl;
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            cout << "Isosceles Triangle" << endl;
        }
        else
        {
            cout << "Scalene Triangle" << endl;
        }
    }

    void display()
    {
        cout << "Sides: " << side1 << ", " << side2 << ", " << side3 << " ==> ";
        determineType();
        cout << endl;
    }
};

int main()
{
    Triangle t1(4, 4, 4);
    Triangle t2(5, 7, 8);
    Triangle t3(4, 6, 4);
    Triangle t4(3, 4, 5);

    t1.display();
    t2.display();
    t3.display();
    t4.display();

    return 0;
}