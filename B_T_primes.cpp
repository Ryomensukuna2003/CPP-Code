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
    ll n=10000001;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (ll j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    vll vec1;
    for(int i=0;i<n;i++){
        if(is_prime[i]==1){
            vec1.push_back(i);
        }
    }
    sort(all(vec1));
    ll x;cin>>x;
    for(ll i=0;i<x;i++){
        bool istrue=false;
        long double target;cin>>target;
        target=sqrt(target);

        ll l=0,r=vec1.size()-1;
        while(l<=r){
            ll mid=l+(r-l)/2;
            if(vec1[mid]==target){
                cout<<"YES"<<endl;
                istrue=true;
                break;
            }
            else if(vec1[mid]>target){
                r=mid-1;
            }
            else if(vec1[mid]<target){
                l=mid+1;
            }
        }
        if(!istrue){
            cout<<"NO"<<endl;
        }
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



// #include <bits/stdc++.h>
// using namespace std;

// #define sf scanf
// #define pf printf
// #define ssf sscanf
// #define spf sprintf
// #define fsf fscanf
// #define fpf fprintf
// #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
// #define scase sf ("%d",&tc)
// #define sn sf ("%d",&n)
// #define whilecase while (tc--)
// #define eof while (cin >> n)
// #define forloop for (pos=1; pos<=tc; pos++)
// #define arrayloop (i=0; i<n; i++)
// #define cinstr cin >> str
// #define getstr getline (cin,str)
// #define pcase pf ("Case %d: ",pos)
// #define pii pair <int,int>
// #define pb push_back
// #define in insert
// #define llu unsigned long long
// #define lld long long
// #define U unsigned int
// #define endl "\n"

// const int MOD = 1000000007;
// const int MAX = 1000001;
// bool prime[MAX];

// void sieve ()
// {
//     int i,j;
//     prime[0] = prime[1] = true;

//     for (i=4; i<MAX; i+=2)
//         prime[i] = true;

//     for (i=3; i*i<=MAX; i+=2)
//         if (!prime[i])
//             for (j=i*i; j<MAX; j+=2*i)
//                 prime[j] = true;
// }

// int main (void)
// {
//     /*
//     freopen ("input.txt","r",stdin);
//     freopen ("output.txt","w",stdout);
//     */
//     sieve ();

//     int tc;
//     lld n,r;

//     sf ("%d",&tc);

//     while (tc--)
//     {
//         sf ("%lld",&n);

//         r = sqrt(n);

//         if (!prime[r] && r*r == n)
//             pf ("YES\n");
//         else
//             pf ("NO\n");
//     }

//     return 0;
// }