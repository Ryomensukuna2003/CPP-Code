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
    int n,x;cin>>n>>x;
    if(x==0 && n==1){
        cout<<0<<" "<<0<<endl;
        return;
    }
    vll vec1(n,9);
    vll vec2(n,9);
    for(int i=0;i<n;i++){
        if(accumulate(all(vec1),0)>x){
            if(i==0){
                vec1[i]=1;
            }
            else{
                vec1[i]=0;
            }
        }
        if(accumulate(all(vec1),0)<x){
            if(i==0){
                vec1[i]=(x-accumulate(all(vec1),0))+1;
                break;
            }
            vec1[i]=(x-accumulate(all(vec1),0));
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(accumulate(all(vec2),0)>x){
            vec2[i]=0;
        }
        if(accumulate(all(vec2),0)<x){
            vec2[i]=(x-accumulate(all(vec2),0));
            break;
        }
    }
    if(accumulate(all(vec1),0)!=x){
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    for(auto x:vec1){
        cout<<x;
    }
    cout<<" ";
    for(auto x:vec2){
        cout<<x;
    }

}

int main(){
    FAST;
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
}
return 0;
}

