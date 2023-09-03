#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
void solve()
{
    ll n,m;cin>>n>>m;
    if(n%2==0){
        if(m<=n/2){
            cout<<1+(2*(m-1));
        }
        else{
            cout<<2*(m-n/2);
        }
    }
    else{
        if(m<=(n/2)+1){
            cout<<1+(2*(m-1));
        }
        else{
            cout<<2*((m-1)-n/2);
        }
    }
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
