#include<bits/stdC++.h>
using namespace std;

void isPalindrome(string s){
    string rev = s;
    reverse(rev.begin(), rev.end());
   if(s == rev ){
    cout<<"Palindrome string";
   }else
   cout<<"not palindrome";
}

int main(){

    string s;
    cin>>s;
    isPalindrome(s);

    return 0;
}