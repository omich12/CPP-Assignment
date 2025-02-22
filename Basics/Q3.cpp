// Write a C++ program to swap the first and last digits of any number.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number;
    int first_digit, last_digit, count = 1, temp;
    int middle_part, swap_num;

    cout << "Enter any number: ";
    cin >> number;

    temp = number;
    while (temp >= 10)
    {
        temp /= 10;
        count *= 10;
    }

    first_digit = temp;
    last_digit = number % 10;

    middle_part = (number % count) / 10;

    swap_num = last_digit * count + middle_part * 10 + first_digit;

    cout << "First digit in a given number:  " << first_digit << endl;
    cout << "Last digit in a given number:  " << last_digit << endl;

    cout << "========================================" << endl;
    cout << "After Swapping the first and last digit:  " << swap_num << endl;

    return 0;
}