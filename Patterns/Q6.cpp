// Write a C++ program to print Floyd's Triangle.

#include <iostream>

using namespace std;

int main()
{
    int i, j, a, b;
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (i = 1; i <= rows; i++)
    {
        if (i % 2 == 0) // Check if the current row number is even.
        {
            a = 1; // Assign 1 to 'a' if the row number is even.
            b = 0; // Assign 0 to 'b' if the row number is even
        }
        else
        {
            a = 0; // Assign 0 to 'a' if the row number is odd.
            b = 1; // Assign 1 to 'b' if the row number is odd.
        }

        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0) // Check if the current position in the row is even.
            {
                cout << a; // Print 'a' if the position is even.
            }
            else
            {
                cout << b; // Print 'b' if the position is odd.
            }
        }

        cout << endl;
    }

    return 0;
}