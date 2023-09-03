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
    vector <ll> vec1;
    
    for(ll i=0;i<n+m;i++){
        ll x;cin>>x;
        vec1.push_back(x);
    }
    

    sort(vec1.begin(),vec1.end()-1);
    reverse(vec1.begin(),vec1.end());

    
    ll ctr=0;
    
        for(int i=0;i<n;i++){
            ctr=ctr+vec1[i];
        }
        cout<<ctr<<endl;
    
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}