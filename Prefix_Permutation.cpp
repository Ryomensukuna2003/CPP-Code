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
    int n;cin>>n;
    vll vec1;
    if(n%2!=0){
        cout<<-1<<endl;
        return;
    }
    else{
        for(int i=2;i<=n;i++){
            vec1.pb(i);
            vec1.pb(i-1);
            i++;
        }
        
    }
    for(auto x:vec1){
        cout<<x<<" ";
    }
    cout<<endl;
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



// 12
// 24
// 32
// 36
// 42
// 48
// 60
// 72
// 84
// 88
// 96
