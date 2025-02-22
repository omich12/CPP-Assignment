// Write a program in C++ to display the first n terms of the Fibonacci series.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    int first = 0, second = 1, next;

    cout << "Enter ther number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: " << first << " " << second << " ";

    int i = 2;

    while (i < n)
    {
        next = first + second;
        first = second;
        second = next;

        cout << next << " ";

        i++;
    }

    return 0;
}