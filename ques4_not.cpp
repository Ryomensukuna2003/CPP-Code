#include <bits/stdc++.h>
using namespace std;
// Write a program in C++ to find the perfect numbers between 1 and 500

#define ll long long
int main() {
    int a,j;
    int z=0;
    cin>>a;
    for (int i=0;i<=500;i++){
        for(int j=1;j<=500;j++){
            if(i%j==0){
                z=z+j;
            }
        }
        if(z==i){
            cout<<i;
            }
    }
        cout<<z;
}
