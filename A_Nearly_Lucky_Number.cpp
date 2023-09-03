#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a, ctr = 0;
    cin >> a;
    
    while(a!=0){
        if(a%10==7 || a%10==4){
            ctr++; 
        }
        a=a/10; 
    }

    if(ctr==4 ||ctr==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
