// Write a program in C++ to display the numbers in reverse order.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    int reverse = 0, remainder;

    cout << "Enter any number: ";
    cin >> n;

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    cout << "The number in reverse order is: " << reverse << endl;

    return 0;
}