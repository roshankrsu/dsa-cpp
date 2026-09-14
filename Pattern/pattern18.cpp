#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
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
// E 
// D E 
// C D E 
// B C D E 
// A B C D E 