// Write a C++ program to capitalize the first character of each element of a given
// string vector. Return the vector.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> test(vector<string> colors)
{
    for (int i = 0; i < colors.size(); i++)
    {
        colors[0][0] = toupper(colors[0][0]);

        colors[i][0] = toupper(colors[i][0]);

        for (int j = 1; j < colors[i].size(); j++)
        {
            colors[i][j] = tolower(colors[i][j]);
        }
    }

    return colors;
}

int main()
{
    vector<string> colors = {"red", "green", "black", "white", "Pink", "orange"};

    cout << "Orginal Vector Elements: \n";
    for (string c : colors)
    {
        cout << c << " ";
    }

    vector<string> result = test(colors);

    cout << "\n--------------------------------------------------------------" << endl;
    cout << "Capitalize the first character of each vector element: " << endl;
    for (string c : result)
    {
        cout << c << " ";
    }

    return 0;
}