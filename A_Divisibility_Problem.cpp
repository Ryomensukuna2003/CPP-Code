#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a%b==0){
        cout<<"0"<<endl;
    }
    else{
        cout<<b-(a%b)<<endl;
    }
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
