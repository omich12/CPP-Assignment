// Write a C++ program to calculate the factorial of a given number using recursion.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int factorial(int n);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}