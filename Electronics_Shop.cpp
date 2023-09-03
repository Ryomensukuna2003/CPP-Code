#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll b,k,m,maxout=0;
    cin>>b>>k>>m;
    ll arr1[k],arr2[m];
    for(ll i=0;i<k;i++) cin>>arr1[i];
    sort(arr1,arr1+k);

    for(ll i=0;i<m;i++) cin>>arr2[i];
    sort(arr2,arr2+m);

    for(ll i=arr1[k-1];i<k;i--){
        for(ll j=arr2[m-1];j<m;j--){
            if(arr1[i]+arr2[j]<=b){
                maxout=max(arr1[i]+arr2[j],maxout);
            }
            else{
                maxout=-1;
            }
        }
    }
    cout<<maxout<<endl;
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
