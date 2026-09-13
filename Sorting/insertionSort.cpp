#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{

    for (int i = 1; i <= n - 1; i++)
    {
        int current = arr[i];
        int prev = i - 1;
        // loop to find the right index where the element current should be inserted
        while (prev >= 0 and arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev + 1] = current;
    }
}

int main()
{

    int arr[] = {-2, 3, 14, -1, 4, 7, 66};
    int n = sizeof(arr) / sizeof(int);
    insertion_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << ", ";
    }

    return 0;
}