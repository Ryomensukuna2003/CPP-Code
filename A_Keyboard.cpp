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
    char a   ;cin>>a;
    string n ;cin>>n;
    vector <char> vec1{'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    if(a=='R'){
        for(int i=0;i<n.size();i++){
            for(int j=0;j<30;j++){
                if(n[i]==vec1[j]){
                    cout<<vec1[j-1];
                    break;
                }
            }
        }
    }
    else{
        for(int i=0;i<n.size();i++){
            for(int j=0;j<30;j++){
                if(n[i]==vec1[j]){
                    cout<<vec1[j+1];
                    break;
                }
            }
        }
    }
}

int main(){
    FAST;
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
}
return 0;
}
