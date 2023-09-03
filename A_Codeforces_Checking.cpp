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

void solve()
{
    int n;cin>>n;
    vector<char>vec1;
    for(int i=0;i<n;i++){
        char x;cin>>x;
        vec1.pb(x);
    }
    for(int i=0;i<n;i++){
        if(vec1[i]=='c' || vec1[i]=='o' || vec1[i]=='d' ||vec1[i]=='e' ||vec1[i]=='f' ||vec1[i]=='r' ||vec1[i]=='e' ||vec1[i]=='s'){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}

int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
}
return 0;
}
