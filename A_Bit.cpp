#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int n,ctr=0;
    cin>>n;
    
    
    for (int i = 0; i < n ; i++)
    {
        string val;
        cin>>val;
        if(val[0]=='X'){
            if(val[1]=='+'){
                ctr++;
            }
            if(val[1]=='-'){
                ctr--;
            }
        }
        else if(val[2]=='X'){
            if(val[1]=='+'){
                ctr++;
            }
            if(val[1]=='-'){
                ctr--;
            }
        }
        
    }
    cout<<ctr<<endl;
}
