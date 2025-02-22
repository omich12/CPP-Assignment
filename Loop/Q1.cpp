// Write a program in C++ to find the perfect numbers between 1 and 500.

#include <iostream>

using namespace std;

int main()
{
    int i = 1, x = 1;
    int sum = 0;

    cout << "The perfect numbers between 1 to 500: " << endl;

    while (i <= 500)
    {
        while (x <= 500)
        {
            if (x < i)
            {
                if (i % x == 0)
                    sum = sum + x;
            }
            x++;
        }

        if (sum == i)
        {
            cout << i << " " << "\n";
        }
        i++;
        x = 1;
        sum = 0;
    }

    return 0;
}