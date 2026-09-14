#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
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
        cout<<"output: "<<endl;
        pattern(n); //
    }
    return 0;
}

// output: 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 