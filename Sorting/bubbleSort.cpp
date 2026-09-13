#include <iostream>
using namespace std;

// sort the elements in increasing order
void bubble_sort(int arr[], int n)
{

    for (int i = 1; i <= n - 1; i++)
    {
        // repeated swapping
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-1, 2, 4, -8, 5, 1};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << ", ";
    }

    return 0;
}