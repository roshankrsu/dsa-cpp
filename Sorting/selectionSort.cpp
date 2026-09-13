#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_position = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_position])
            {
                min_position = j;
            }
        }
        int temp = arr[min_position];
        arr[min_position] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {2, 3, 14, 1, 4, 7, 66};
    int n = sizeof(arr) / sizeof(int);
    selection_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << ", ";
    }

    return 0;
}