// Write a program in C++ to calculate the product of the digits of any number.

#include <iostream>

using namespace std;

int main()
{
    int n;
    int rem, product = 1;

    cout << "Enter any number: ";
    cin >> n;

    while (n > 0)
    {
        rem = n % 10;
        product = product * rem;
        n = n / 10;
    }

    cout << "Product of the digits of given number is: " << product << endl;

    return 0;
}