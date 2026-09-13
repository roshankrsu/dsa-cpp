#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr + n, compare);
    // reverse(arr, arr + n);

    // print the output
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}