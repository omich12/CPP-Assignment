// Write a C++ program to add repeatedly all digits of a given non-negative number
// until the result has only one digit.

#include <iostream>

using namespace std;

int main()
{
    int number;
    int sum = 0, rem;

    cout << "Enter any number: ";
    cin >> number;

    while (number / 10 != 0)
    {
        sum = 0;
        while (number != 0)
        {
            rem = number % 10;
            sum = sum + rem;
            number = number / 10;
        }

        number = sum;
    }

    cout << "After adding the given digits to a single digit:  " << sum << endl;

    return 0;
}