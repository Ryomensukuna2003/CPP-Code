#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define mod 1000000007
void solve()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=*min_element(arr,arr+n);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(arr[i]-mini);
    }
    cout<<sum<<endl;
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
