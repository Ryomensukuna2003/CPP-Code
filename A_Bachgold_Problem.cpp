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
    int n;cin>>n;
    vector<int>vec1;

    if(n%2==0){
        while(n>0){
            n-=2;
            vec1.pb(2);
        }
        cout<<vec1.size()<<endl;
        for(auto x:vec1){
            cout<<x<<" ";
        }
    }
    else{
        vec1.push_back(3);
        n-=3;
        while(n>0){
            n-=2;
            vec1.pb(2);
        }
        sort(all(vec1));
        cout<<vec1.size()<<endl;
        for(auto x:vec1){
            cout<<x<<" ";
        }

    }
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
