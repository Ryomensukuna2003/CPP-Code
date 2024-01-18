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
    vll vec1,vec2;
    forin(n,vec1);
    forin(n,vec2);
    int count=vec1[0],max_int=vec2[0];
    for(int i=1;i<min(x,n);i++){
        if(vec1[i]<max_int){
            int max_for=vec1[i],max_count=max_int,j=i+1;
            while(true){
                if(j==min(n,x)){
                    i=j;
                    count+=max_count;
                    break;
                }
                max_for+=vec1[j];
                max_count+=*max_element(vec2.begin(),vec2.begin()+i);
                if(max_for>max_count){
                    i=j;
                    count+=max_for;
                    break;
                }
                j++;
            }
        }
        else{
            count+=vec1[i];
            if(max_int<vec2[i]){
                max_int=vec2[i];
            }
        }
    }
    sort(all(vec2),greater<int>());

    for(int i=0;i<x-n;i++){
        count+=vec2[i];
    }
    cout<<count<<endl;
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







// //Jai Sachidanand
// #include <iostream>
// typedef long long ll;
// using namespace std;
// #define vector vi
// #include <bits/stdc++.h>
// #define pb push_back
// #define mod 1000000007
// #define srt(v) sort(v.begin(),v.end())
// #define mxe(v) *max_element(v.begin(),v.end())
// #define mne(v) *min_element(v.begin(),v.end())
// #define all(v)  v.begin(),v.end()
// //int ind = max_element(all(a)) - a.begin();
// #define dis(v)  distance(v.begin(),max_element(all(v)))
// #define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));// Apply after Sorting
// // else only consecutive duplicates would be removed 
// //s.erase(unique(s.begin(), s.end()), s.end());

// void solve() {
//     int n,k;
//     cin >> n >> k;
//     vi<int>a(n),b(n);
//     for(int i = 0;i < n;i++){
//         cin >> a[i];
//     }
//     for(int i = 0;i < n;i++){
//         cin >> b[i];
//     }
//     vi<int>max_till(n+1);
//     for(int i = 0;i < n;i++){
//         if(i==0){
//             max_till[0] = b[0];
//         }
//         else{
//             max_till[i] = max(max_till[i-1],b[i]);
//         }
//     }

//     int ans = 0;
//     int res = 0;
//     int curr = 0;
//     if(k < n){
//     for(int i = 0;i < k;i++){
//         ans+=a[i];
//         curr = (k - (i+1)) * max_till[i] + ans;
//         res = max(res,curr);
//     }
//     cout << res << endl;
//     }
//     else{
//         for(int i = 0;i < n;i++){
//         ans+=a[i];
//         curr = (k - (i+1)) * max_till[i] + ans;
//         res = max(res,curr);
//     }
//         cout << res << endl;
//     }

// }

// int main() {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t = 1;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
