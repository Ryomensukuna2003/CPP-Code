#include <bits/stdc++.h>
using namespace std;
// Write a program in C++ to find prime number within a range.

#define ll long long
int main() {
    int a,b;
    int c=0,fnd=0;
    cin>>a;
    cin>>b;
    
    // for 1 to 100
    for(int i=a;i<=b;i++)
    {
        // for cheaking prime number
        for(int j=2;j<=sqrt(i);j++)
            {
            if(i%j==0)
                c++;     
            }
            if(c==0 && i!=1)
            {fnd++;
            cout<<i<<" ";
        }
        c=0;
    }
    cout<<fnd<<endl;
    return 0;
}
