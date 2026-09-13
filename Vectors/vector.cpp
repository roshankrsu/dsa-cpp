#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Demo Vector
    // vector<int> arr = {1, 2, 3, 6, 8};

    //Fill Constructor
    vector<int> arr(10, 7);
    vector<int> visited(1000, 7);

    //Pop_back
    // arr.pop_back();
    // Push_Back O(1)
    // arr.push_back(12);

    // Print all the elements
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    // size of the vector
    // cout << arr.size() << endl;

    // Capacity of the vector
    // cout << arr.capacity() << endl;

    return 0;
}
