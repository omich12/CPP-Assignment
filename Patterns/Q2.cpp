// Write a program in C++ to display the pattern like right angle triangle with number.

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
            cout << j;
        }
        cout << endl;
    }

    return 0;
}