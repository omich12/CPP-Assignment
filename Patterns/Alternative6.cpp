// Alternative: Binary Floyd’s Triangle

#include <iostream>

using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (j % 2) << " "; // Alternating 0 and 1
        }
        cout << endl;
    }

    return 0;
}
