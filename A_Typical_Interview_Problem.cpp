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


// F  B  F  F  B  F  F  B  F  B  F  F  B  F  F  B 

bool substringcheck(string s1,string s2){
    if (s2.find(s1) != std::string::npos) return true;
    
    else    return false;
    
}

void solve()
{
    int n;cin>>n;
    string s1;cin>>s1;
    string s2="FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
    if (substringcheck(s1,s2)) {
    cout << "YES" << '\n';
    }
    else{
        cout<<"NO"<<endl;
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
