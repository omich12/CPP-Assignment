// Write a C++ program that accepts the user's first
// and last name and prints them in
// reverse order with a space between them.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string first_name;
    string last_name;

    cout << "Enter your first name: ";
    cin >> first_name;

    cout << "Enter your last name: ";
    cin >> last_name;

    cout << "Your fullname in reverse order is: " << last_name << " " << first_name << endl;

    return 0;
}
