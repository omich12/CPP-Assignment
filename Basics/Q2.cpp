// Write a C++ program that swaps two variables without using a third variable.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x;
    int y;

    cout << "Enter the first number: ";
    cin >> x;

    cout << "Enter the second number: ";
    cin >> y;

    cout << "Before swapping: x =  " << x << ", y = " << y << endl;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "----------------" << endl;
    cout << "After swapping: " << endl;
    cout << "----------------" << endl;
    cout << "First number 'x': " << x << endl;
    cout << "Second number 'y': " << y << endl;

    return 0;
}