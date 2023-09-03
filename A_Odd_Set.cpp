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
    vector<int>vec1;
    int even=0,odd=0;
    for(int i=0;i<2*n;i++){
        int x;cin>>x;
        vec1.pb(x);
    }
    for(int i=0;i<2*n;i++){
        if(vec1[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even==odd){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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
