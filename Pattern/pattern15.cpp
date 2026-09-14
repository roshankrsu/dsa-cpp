#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << "output: " << endl;
        pattern(n);
    }
}

// output:
// A B C D E
// A B C D
// A B C
// A B
// A