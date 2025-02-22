// Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + … up to ‘n’
// terms.

#include <iostream>

using namespace std;

int main()
{
    int n, i, sum = 0;
    int term = 1;

    cout << "-------------------------------\n";
    cout << "Enter the number of terms: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << term << " ";
        if (i < n)
        {
            cout << "+ ";
        }

        sum = sum + term;
        term = (term * 10) + 1;
    }

    cout << "\nThe sum of the series is: " << sum << endl;

    return 0;
}