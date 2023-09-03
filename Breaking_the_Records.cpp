#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace  __gnu_pbds;
#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
#define all(x)   (x).begin(), (x).end()
#define mod      1000000007
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
using namespace  std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;

void solve()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=arr[0],max_count=0;
    for(int i=1;i<n;i++){
        if(count<arr[i]){
            count=arr[i];
            max_count++;
        }
    }
    cout<<max_count<<" ";
    count=arr[0],max_count=0;
    for(int i=1;i<n;i++){
        if(count>arr[i]){
            count=arr[i];
            max_count++;
        }
    }
    cout<<max_count;

}

int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
}
return 0;
}
