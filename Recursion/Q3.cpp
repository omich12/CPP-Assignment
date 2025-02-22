// Write a C++ program to implement a recursive function to get the nth Fibonacci
// number.

#include <iostream>

using std::cout;
using std::endl;

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int n;

    cout << "Enter a number: ";
    std::cin >> n;

    int result = fibo(n);

    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}