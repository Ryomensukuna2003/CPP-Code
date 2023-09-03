#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a;
    cin>>a;
    if(a%2==0){
        cout<<a/2<<endl;
    }
    else{
        cout<<a/2-a<<endl;
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
