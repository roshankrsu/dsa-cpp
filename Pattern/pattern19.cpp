#include <iostream>
using namespace std;

void pattern(int n)
{
    // Upper half
    for (int i = 0; i < n; i++)
    {
        // Stars
        for (int j = 0; j < n - i; j++)
            cout << "*";

        // Spaces
        for (int j = 0; j < 2 * i; j++)
            cout << " ";

        // Stars
        for (int j = 0; j < n - i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for (int i = 0; i < n; i++)
    {
        // Stars
        for (int j = 0; j <= i; j++)
            cout << "*";

        // Spaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
            cout << " ";

        // Stars
        for (int j = 0; j <= i; j++)
            cout << "*";

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
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****