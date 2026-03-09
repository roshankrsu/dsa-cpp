#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int revNum = 0;
    int dup = n;

    while(n > 0){
        int lastdigit = n % 10;
        revNum = revNum * 10 + lastdigit;
        n = n / 10;
    }

    return revNum == dup;
}

int main(){
    int n;
    cin >> n;

    if(isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}