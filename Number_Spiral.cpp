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

bool substringcheck(string s1,string s2){
    // String 1 in String 2
    if (s2.find(s1) != std::string::npos) return true;
    else return false;
}

void solve()
{
    ll row,col;cin>>row>>col;
    ll count=1;
    ll ans;
    if(row>=col){
        // 4 2
        if(row%2==0){
            ans=(row*row)-(col-1);
        }
        // 5 2
        else{
            ans=((row-1)*(row-1))+(col);
        }
        cout<<ans<<endl;
    }
    else{
        if(col%2==0){
            // 2 4
            ans=((col-1)*(col-1))+row;
            cout<<ans<<endl;
            
        }
        else{
            // 2 3
            ans=(col*col)-(row-1);
            cout<<ans<<endl;
            
        }
    }
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
