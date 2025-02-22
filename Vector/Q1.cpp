// Write a C++ program that returns the elements in a vector that are strictly smaller
// than their adjacent left and right neighbours.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> test(vector<int> num)
{
    vector<int> temp;
    for (int i = 1; i < num.size() - 1; i++)
    {
        if (num[i] < num[i - 1] && num[i] < num[i + 1])
        {
            temp.push_back(num[i]);
        }
    }
    return temp;
}

int main()
{
    vector<int> num = {1, 2, 5, 0, 3, 1, 7};

    cout << "Original Vector elemnets: \n";
    for (int a : num)
    {
        cout << a << " ";
    }

    vector<int> result = test(num);

    cout << "\nVector elements that are smaller than its adjacent neighbors: " << endl;
    for (int b : result)
    {
        cout << b << endl;
    }

    return 0;
}
