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
    int n;cin>>n;
    vector<int> vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.push_back(x);
    }
    int sum=0;
    int maxi=*max_element(all(vec1));

    for(int i=0;i<n;i++){
        sum=sum+(maxi-vec1[i]);
    }
    cout<<sum<<endl;
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
