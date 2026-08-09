#include <iostream>
using namespace std;

// Brute Force
int largestSubArraySum1(int arr[], int n)
{
    int largest_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subArraySum = 0;
            for (int k = i; k <= j; k++)
            {
                // cout << arr[k] <<", ";
                subArraySum += arr[k];
            }
            // cout<<"sum of sub array -> " <<subArraySum;
            cout << endl;
            // put a check is subArraySum > largest_sum
            largest_sum = max(largest_sum, subArraySum);
        }
    }
    return largest_sum;
}

// Prefix Sum Approach O(N^2)
int largestSubArraySum2(int arr[], int n)
{
    // Prefix Sums
    int prefix[100] = {0};
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    // largest sum
    int largest_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            // put a check is subarraySum> largest sum
            largest_sum = max(largest_sum, subarraySum);
        }
    }
    return largest_sum;
}

// kadane's algorithm
int largestSubArraySum3(int arr[], int n)
{
    int cs = 0;
    int largest = 0;

    for(int i = 0; i<n; i++){
        cs = cs + arr[i];
        if(cs<0){
            cs = 0;
        }
        largest =  max(largest, cs);
    }
    return largest;
}

int main()
{

    int arr[] = {-1, 2, 5, 7, 8, 6, -11};
    int n = sizeof(arr) / sizeof(int);

    cout << largestSubArraySum3(arr, n);
}