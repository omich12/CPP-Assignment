// Write a C++ program to convert a binary number to a decimal number.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cout << "Enter a binary number: ";
    cin >> n;

    int decimal = 0;
    int rem, i = 0;
    {
        while (n != 0)
        {
            rem = n % 10;
            n = n / 10;
            decimal = decimal + rem * pow(2, i);
            i++;
        }
    }

    cout << "Decimal number: " << decimal << endl;

    return 0;
}