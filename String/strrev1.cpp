// Write a C++ program to reverse a given string.

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char str[50];

    cout << "Enter a string: ";
    cin >> str; // Only reads the forst word.

    strrev(str);

    cout << "Reverse string: " << str << endl;

    return 0;
}