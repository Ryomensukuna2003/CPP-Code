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
    int a,b,c,d;cin>>a>>b>>c>>d;
    set<int> set1;
    for(int i=a;i<=b;i++){
        set1.insert(i);
    }
    for(int i=c;i<=d;i++){
        set1.insert(i);
    }
    cout<<set1.size()<<endl;
    

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
}
return 0;
}

