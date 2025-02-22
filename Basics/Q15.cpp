// Write a program in C++ to enter any number and print all factors of the number.

#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter any number: ";
    cin >> number;

    cout << "Factors of " << number << " are: ";
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}