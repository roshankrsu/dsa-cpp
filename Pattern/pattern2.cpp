#include<bits/stdc++.h>
using namespace std;
 
void print11(int n){
    int space =  2*(n-1);
    for(int i = 1; i<=n; i++){
        //numbers
        for(int j = 1; j<=i; j++) {
            cout << j;
        }

        //space
        for(int j = 1; j<=space; j++){
            cout<<" ";
        }


        //number
        for (int j = i; j>=1; j--){
            cout << j;
        }
        cout<<endl;
        space -= 2;
    }
}

void print12(int n){
    int num = 1;
   for(int i = 1; i<=n; i++){
    for(int j = 1; j<=i; j++){
        cout << num<<" ";
        num++;
    }
    cout<<endl;
   }
}

void print13(int n){
    for (int i = 0; i < n; i++){
       for(char ch = 'A'; ch <= 'A' + i; ch++){
        cout<<ch <<" ";
       }
       cout<<endl;
    }
    
}

void print14(int n){
    for(int i = 0; i<n; i++){
        for(char ch = 'A'; ch < 'A' + (n-i); ch++){
              cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print15(int n){
    for(int i = 0; i<=n; i++){
        char ch = 'A' + i;
        for(int j = 0; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
 
int main() {
    print15(5);
    return 0;
}