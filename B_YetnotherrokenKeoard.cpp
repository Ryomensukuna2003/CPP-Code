#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace  __gnu_pbds;
using namespace  std;
 
//                                「本 物 の 柔 術 を 見 せ て や る」
 
#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
const ll M = 1e9 + 7;
const ll N = 1e5 + 5;
const ll inf = 2e18;
#define all(x)   (x).begin(), (x).end()
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
#define forin(x,y) for(auto i=0;i<x;i++){int x;cin>>x;y.pb(x);}
#define forout(x)  for(auto y:x){cout<<y<<' ';}
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;

bool substringcheck(string s1,string s2){
    // String 1 in String 2
    if (s2.find(s1) != std::string::npos) return true;
    else return false;
}

void rem_dup_order(vector<ll> &vec1) {
  auto it = unique(vec1.begin(), vec1.end());
    vec1.resize(distance(vec1.begin(), it));
}

ll mod(ll x) { return (x % M); }
ll mod_minus(ll a, ll b)
{
    ll ans = (mod(a) - mod(b));
    if (ans < 0)
        ans = mod(ans + M);
    return ans;
}
ll mod_mul(ll a, ll b) { return mod(mod(a) * mod(b)); }
ll mod_add(ll a, ll b) { return mod(mod(a) + mod(b)); }
ll power(ll a, ll n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return a;
    ll R = power(a, n / 2) % M;
    if (n % 2 == 0)
    {
        return mod(mod_mul(R, R));
    }
    else
    {
        return mod(mod_mul(mod_mul(R, a), mod(R)));
    }
}
ll mod_div(ll a, ll b)
{
    ll ans = mod(a);
    ll b1 = power(b, M - 2);
    ans = mod(mod_mul(ans, b1));
    return ans;
}

void solve()
{
    string s;cin>>s;
    vector<pair<char,int>>caps;
    vector<pair<char,int>>small;
    // for(int i=0;i<s.size();i++){
    // }
    for(int i=0;i<s.size();i++){
        if(isupper(s[i]) && s[i]!='B'){
            caps.push_back(pair<char,int>(s[i],i));
        }
        else if(islower(s[i]) &&s[i]!='b'){
            small.push_back(pair<char,int>(s[i],i));
        }
        if(s[i]=='B'){
            if(caps.size()!=0){
                caps.pop_back();
            }   
        }
        else if(s[i]=='b'){
            if(small.size()!=0){
                small.pop_back();
            }
        }
    }
    vector<pair<int,char>>vec1;
    for(int i=0;i<caps.size();i++){
        vec1.push_back(pair<int,char>(caps[i].second,caps[i].first));
    }
    for(int i=0;i<small.size();i++){
        vec1.push_back(pair<int,char>(small[i].second,small[i].first));
    }
    sort(all(vec1));
    for(auto x:vec1){
        cout<<x.second;
    }
    cout<<endl;
    // for(auto x:caps){
    //     if((x.first)!='B'){
    //         cout<<x.first<<" "<<x.second<<endl;
    //     }
    // }
    // cout<<endl;
    // for(auto x:small){
    //     if((x.first)!='b'){
    //         cout<<x.first<<" "<<x.second<<endl;
    //     }
    // }
    // cout<<endl;
    // cout<<endl;

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
