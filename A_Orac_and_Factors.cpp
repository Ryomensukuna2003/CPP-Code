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
    int a,z;cin>>a>>z;
    if(a%2==0){
        a+=(2*z);
        cout<<a<<endl;
    }
    else{
        for(int i=3;i<=a;i++){
            if(a%i==0){
                a+=i+(2*(z-1));
                break;
            }
            i++;
        }
        cout<<a<<endl;
    }
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
