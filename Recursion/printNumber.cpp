#include<iostream>
using namespace std;

//print 1 to N linearly
void oneToN(int i, int n){
    if(i > n){
        return;
    }
    cout<<i<<endl;
    oneToN(++i, n);
}

//print N to 1 linearly
void ntoOne(int i, int n){
    if(i < 1){
        return;
    }
    cout<<i<<endl;
    ntoOne(i-1, n);
}

int main(){
    int n;
  cout<<"Enter a number: ";
  cin>>n;
//   ntoOne(n, n);
//   oneToN(1,n);
}