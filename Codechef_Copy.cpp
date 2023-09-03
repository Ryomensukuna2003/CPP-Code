#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace  __gnu_pbds;
using namespace  std;
 
//                                「本 物 の 柔 術 を 見 せ て や る」
 
#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
#define all(x)   (x).begin(), (x).end()
#define mod      1000000007
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
#define forin(x,y) for(int i=0;i<x;i++){int x;cin>>x;y.pb(x);}
#define forout(x)  for(auto y:x){cout<<y<<' ';}
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;

bool substringcheck(string s1,string s2){
    // String 1 in String 2
    if (s2.find(s1) != string::npos) return true;
    else return false;
}


void solve()
{
    string s;cin>>s;
    string s1=s;
    string check="codechef";
    sort(s1.begin(), s1.end());
    vector<string> permutations;
    do {
        permutations.push_back(s1);
    } 
    while (next_permutation(s1.begin(), s1.end()));
    for(int i=0;i<permutations.size();i++){
        bool istrue=true;
        for(int j=0;j<8;j++){
            if(permutations[i][j]==s[j] || permutations[i][j]==check[j]){
                istrue=false;
                break;
            }
        }
        if(istrue){
            cout<<permutations[i]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    // cout<<permutations.size()<<endl;

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
