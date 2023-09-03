#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace  __gnu_pbds;
 
//                                「本 物 の 柔 術 を 見 せ て や る」
 
#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
#define all(x)   (x).begin(), (x).end()
#define mod      1000000007
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
using namespace  std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;

int solve()
{
    int n,x,y;cin>>n>>x;
    
    if(x==0){
        for(int i=0;i<n-1;i++){
            cout<<"*";
        }
        cout<<"-"<<endl;
    }
    if(x>0){
        x=x-1;
        if(n<x){
            cout<<-1<<endl;
            return -1;
        }
            for(int i=1;i<=x;i++){
                cout<<'+';
            }
            for(int i=0;i<abs(x-n);i++){
                cout<<"*";
            }
            cout<<endl;
    }
    if(x<0){
        x=abs(x)+1;
        y=n-x;

            for(int i=0;i<x;i++){
                cout<<"-";
            }
            for(int i=0;i<y;i++){
                cout<<"*";
            }
            cout<<endl;
    }
    return 0;
}

int main(){
    FAST;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
}
return 0;
}
