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
    if((n&1)!=0 && n<4){
        cout<<"NO"<<endl;
    }
    else if((n&1)!=0){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            if((i&1)==0){
                cout<<(n/2)-1<<" ";
            }
            else{
                cout<<-1*(n/2)<<" "; 
            }
        }
        cout<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=1;i<n/2+1;i++){
            cout<<1<<" ";
            cout<<-1<<" ";
        }
        cout<<endl;
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
