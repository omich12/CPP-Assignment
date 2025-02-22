// Write a program in C++ to display a pattern like a right angle triangle using an
// asterisk.

#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}