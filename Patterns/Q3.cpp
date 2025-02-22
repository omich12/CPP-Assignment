// Write a C++ program to make such a pattern like a right angle triangle with the
// number increased by 1.

#include <iostream>

using namespace std;

int main()
{
    int i, j, k = 1;
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (i = 1; i <= rows; i++) // Loop for the number of rows.
    {
        for (j = 1; j <= i; j++) // Nested loop for printing numbers in each row.
        {
            cout << k++ << " "; // Print the value of 'k' (increased by 1) and increment 'k' afterwards.
        }
        cout << endl;
    }

    return 0;
}