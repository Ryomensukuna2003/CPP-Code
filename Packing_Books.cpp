#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll x,y,z;
    cin>>x>>y>>z;
    ll val=floor(y/z);
    if(y%z==0){
        cout<<x<<endl;
    }
    else{
        val=x*(val+1);
         cout<<val<<endl;
    }

}
int main(){
        ll t;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
