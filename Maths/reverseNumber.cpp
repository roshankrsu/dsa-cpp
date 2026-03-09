#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int revNum = 0;
    while(n!=0){
        int lastDigit = n % 10;
        if(revNum > INT_MAX/10 || revNum<INT_MIN/10){
            return 0;
        }
        revNum =(revNum*10)+lastDigit;
        n = n / 10;
    }
    return revNum;
}

int main(){
int n;
cout<<"Enter the number you want to reverse: ";
cin>>n;
cout<<"reversed number will be: "<<reverse(n);
    
}