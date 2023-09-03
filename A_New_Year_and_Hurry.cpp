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
typedef tree<ll, null_type, less<ll>, rb_tree_tag,                                                               tree_order_statistics_node_update> pbds;
#define mod 1000000007
void solve()
{
    int n,k;cin>>n>>k;
    int val=240-k;
    int ctr=0;
    int sum=0;
    
        for(int i=1;i<=n;i++){

            sum=sum+(i*5);
            if(sum>val){
                break;
            }
            ctr++;
        }
    cout<<ctr<<endl;

}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
