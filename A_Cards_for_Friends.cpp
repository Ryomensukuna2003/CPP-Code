#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define mod 1000000007
void solve()
{
    int w,h,n;cin>>w>>h>>n;
    int count=1;
    if(w%2!=0 && h%2!=0 && n==1){
        cout<<"YES"<<endl;
    }
    else if(w%2!=0 && h%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        if(w%2==0){
            while(w>1){
                w/=2;
                count++;
            }
        }
        if(h%2==0){
            while(h>1){
                h/=2;
                count++;
            }
        }
        if(count>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    cout<<count<<endl;
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
