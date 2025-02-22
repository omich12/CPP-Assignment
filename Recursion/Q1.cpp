// Write a C++ program to find the sum of all elements in an array using recursion.

#include <iostream>

using std::cout;
using std::endl;

int array_sum(int a[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    else
    {
        return a[size - 1] + array_sum(a, size - 1);
    }
}

int main()
{
    int n[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
    int size = sizeof(n) / sizeof(n[0]);

    cout << "Array Elements: " << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << n[i] << ' ';
    }

    int sum = array_sum(n, size);

    cout << "\nSum of all array elements using recursion: " << sum << endl;

    return 0;
}