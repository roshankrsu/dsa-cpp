//print name n times
#include<iostream>
using namespace std;

void f(int i,int n){
  if(i>n){
    return;
  }else{
    
    cout<<"roshan "<< i <<endl;
    f(i+1, n);

  }
}

int main(){
  int n;
  cout<<"Enter number times you want to print: ";
  cin>>n;
  f(1, n);
}