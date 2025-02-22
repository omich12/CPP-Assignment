// For n = 10, write a C++ program that reads the integer n and prints its factorial.

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    cout << "Factorial of " << n << " = " << factorial << endl;

    return 0;
}
