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
    int val=n;
    int count=0;
    bool xyz=false;
    while(n>0){
        if(n==1){
            break;
        }
        if(n%6!=0){
            n=n*2;
            count++;
        }
        if(n%6==0){
            n/=6;
            count++;
        }
        if(n>val){
            xyz=true;
        }
    }
    if(xyz){
        cout<<-1<<endl;
    }
    else{
        cout<<count<<endl;
    }
}

int main(){
    ll t=1;
    cin>>t;
    while(t--){
        solve();
}
return 0;
}
