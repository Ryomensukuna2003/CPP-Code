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
    int a,b;cin>>a>>b;
    int x=6-(max(a,b)-1);
    int y=6;
    // cout<<x<<endl;
    if(x==6){
        x/=6;
        y/=6;
        cout<<x<<"/"<<y<<endl;
    }
    else if(x==4){
        x/=2;
        y/=2;
    cout<<x<<"/"<<y<<endl;

    }
    else if(x==3){
        x/=3;
        y/=3;
    cout<<x<<"/"<<y<<endl;

    }
    else if(x==2){
        x/=2;
        y/=2;
    cout<<x<<"/"<<y<<endl;

    }
    else{
            cout<<x<<"/"<<y<<endl;

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
