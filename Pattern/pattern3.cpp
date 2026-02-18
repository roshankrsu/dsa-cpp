#include<bits/stdc++.h>
using namespace std;

void print16(int n){
    for (int i = 0; i < n; i++){
        //spaces
        for(int j = 0; j<=n-i-1; j++){
            cout<<" ";
        }
         //Characters
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for (int j = 1; j<=2*i+1; j++){
            cout<<ch;
            if(j<=breakpoint){
                ch++;
            }else{
                ch--;
            }
        }
        //spaces
        for(int j = 0; j <n-i-1; j++){
            cout<<" ";
        }   
        cout<<endl;
        }
    }

void print17(int n){
    for(int i = 0; i<n; i++){
         for(char ch = 'E' - i; ch<='E'; ch++){
            cout<<ch<<" ";
         }
         cout<<endl;
    }
}

void print18(int n){
    int initialSpace = 0;
    for(int i = 0; i<n; i++){
        //stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        //spaces
        for(int j =0; j<initialSpace; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
       }
    initialSpace += 2;
    cout<<endl;
}
 initialSpace = 2*n-2;
    for(int i = 1; i<=n; i++){
        
        //stars
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        //spaces
        for(int j = 0; j<initialSpace; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<i; j++){
            cout<<"*";
       }
    initialSpace -= 2;
    cout<<endl;
}
    
}

void print19(int n){
    int spaces = 2*n-2;
    for (int i = 1; i <= 2*n-1; i++){
       int stars = i;
       if(i > n) stars = 2*n - i;
       //stars
       for (int j = 1; j <= stars; j++){
         cout<<"*";
       }
       //spaces
       for(int j = 1; j<= spaces; j++){
        cout<<" ";
       }

       //stars
       for (int j = 1; j <= stars; j++){
         cout<<"*";
       }
       cout<<endl;
       if(i < n) spaces -=2;
       else spaces += 2;
   } 
}

void print20(int n){
    for(int i = 0; i <n; i++){
        for(int j = 0; j<n; j++){
            if(i == 0 || j == 0 || i == n-1 || j == n-1){
            cout<<"*";
        }else
        cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    print20(5);
    return 0;
}