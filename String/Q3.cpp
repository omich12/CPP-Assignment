// Write a C++ program to find the largest word in a given string.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    string result, temp;

    cout << "Enter a string: ";
    getline(cin, text);

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ' && (int(text[i]) >= 65 && int(text[i]) <= 90) || (int(text[i]) >= 97 && int(text[i]) <= 122) || (int(text[i] >= 48 && int(text[i]) <= 57)))
        {
            result.push_back(text[i]); // Add the character to the result word.
        }

        else
        {
            break;
        }
    }

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ' && (int(text[i]) >= 65 && int(text[i]) <= 90) || (int(text[i]) >= 97 && int(text[i]) <= 122) || (int(text[i] >= 48 && int(text[i]) <= 57)))
        {
            temp.push_back(text[i]); // Add the character to the temporary substring

            // Check if it's the last character of the string and the temp substring is longer than the result word
            if (i + 1 == text.length() && temp.length() > result.length())
            {
                result = temp; // Update the result word
            }
        }
        else
        {
            // Check if the temporary substring is longer than the result word
            if (temp.length() > result.length())
            {
                result = temp; // Update the result word
            }

            temp.clear(); // Clear the temporary substring
        }
    }

    cout << "Largest Word: " << result << endl;

    return 0;
}