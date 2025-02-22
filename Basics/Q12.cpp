// Write a C++ program to compute the square root of a given non-negative integer.
// Return type should be an integer.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number;

    cout << "Enter a non-negative integer: ";
    cin >> number;

    int result = sqrt(number);

    cout << "Square root of " << number << " = " << result << endl;

    return 0;
}