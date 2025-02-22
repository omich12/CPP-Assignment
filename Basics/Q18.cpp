// Write a program in C++ to convert a decimal number to a binary number.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cout << "Enter a decimal number: ";
    cin >> n;

    int binary = 0;
    int rem, i = 1;
    {
        while (n != 0)
        {
            rem = n % 2;
            n = n / 2;
            binary = binary + rem * i;
            i = i * 10;
        }
    }

    cout << "Binary number: " << binary << endl;

    return 0;
}