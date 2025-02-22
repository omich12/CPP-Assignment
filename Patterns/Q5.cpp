// Write a C++ program to make such a pattern, like a pyramid, with a repeating
// number.

#include <iostream>

using namespace std;

int main()
{
    int i, j, k;
    int space, rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    space = rows + 4 - 1; // Calculate the number of spaces for formatting.

    for (i = 1; i <= rows; i++) // Loop for the number of rows.
    {
        for (k = space; k >= 1; k--) // Loop to print spaces before the numbers.
        {
            cout << " "; // Print a space.
        }

        for (j = 1; j <= i; j++) // Loop to print numbers in each row.
        {
            cout << i << " "; // Print the value of 'i' (repeated numbers) followed by a space.
        }

        cout << endl;
        space--; // Decrement the number of spaces for the next row.
    }

    return 0;
}