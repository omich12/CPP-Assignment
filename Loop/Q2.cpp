// Write a program in C++ to find the last prime number that occurs before the entered
// number.

#include <iostream>

using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter a number to find the last prime number occurs before it: ";
    cin >> num;

    for (int i = num - 1; i >= 1; i--)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 0)
        {
            if (i == 1)
            {
                cout << "No prime number less than 2";
                break;
            }

            cout << i << " is the last prime number before " << num << "." << endl;
            break;
        }
        count = 0;
    }

    return 0;
}