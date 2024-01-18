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
    ll n;cin>>n;
    string s;cin>>s;
    vll vec1;
    for(int i=0;i<n;i++){
        vec1.push_back(s[i]-48);
    }
    ll count=0,ans=0;
   

    for(int i=2;i<n;i=i+2){
        count=0;
        int or1=vec1[i-2]|vec1[i-1];
        int xor1=vec1[i-2]^vec1[i-1];
        int and1=vec1[i-2]&vec1[i-1];
        if(or1==vec1[i]){
            count++;
        }
        if(xor1==vec1[i]){
            count++;
        }
        if(and1==vec1[i]){
            count++;
        }

        if (ans==0 && i==2){
            ans=count;
            ans=(mod(count));
        }
        else{
            ans=(mod(ans*count));
        }
    }
    cout<<ans<<endl;
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
