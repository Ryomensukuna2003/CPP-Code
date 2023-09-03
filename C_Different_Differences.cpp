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
    int size,end;cin>>size>>end;
    vector <int> vec1;
    vec1.push_back(1);
    vec1.push_back(1);
    for(int i=1;i<=size;i++){
        int x=(i+1)/i;
        vec1.push_back(x+vec1[i]);
    }
    for(auto x:vec1){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
