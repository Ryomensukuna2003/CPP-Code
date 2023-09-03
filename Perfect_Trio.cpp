#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
void solve()
{
    int a,b,c;cin>>a>>b>>c;
    if(a==(b+c) || b==(c+a) || c==(a+b) ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
