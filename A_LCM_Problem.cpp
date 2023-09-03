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
    int l,r;cin>>l>>r;
    int count=0;
    int a,b;
    for(int i=l;i<=r;i++){
        for(int j=l;j<i;j++){
            if(lcm(i,j)>=l && lcm(i,j)<=r){
                a=i;b=j;
                count++;
                break;
            }
        }
        if(count>0){
            break;
        }        
    }
    if(count>0){
        cout<<b<<" "<<a<<endl;
    }
    else{
        cout<<-1<<" "<<-1<<endl;
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
