// Write a C++ program to capitalize the first letter of each word in a given string.
// Words must be separated by only one space.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;

    cout << "Enter a string: ";
    // cin >> text;        // Only reads the first word.
    getline(cin, text); // Read the full line including spaces.

    for (int i = 0; i < text.length(); i++)
    {
        if (i == 0 || text[i - 1] == ' ')
        {
            text[i] = toupper(text[i]); // Convert the character to uppercase.
        }
    }

    cout << "Capitalize the first letter of each word: \n"
         << text << endl;

    return 0;
}