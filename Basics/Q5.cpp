// Write a C++ program that prints the three highest numbers from a list of numbers in
// descending order.

#include <iostream>

using namespace std;

int main()
{
    int n, number;
    int first = -1000000, second = -1000000, third = -1000000; // Small default value

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> number;

        if (number > first)
        {
            third = second;
            second = first;
            first = number;
        }
        else if (number > second)
        {
            third = second;
            second = number;
        }
        else if (number > third)
        {
            third = number;
        }
    }

    cout << "The three highest numbers in descending order: ";
    cout << first << " " << second << " " << third << endl;

    return 0;
}