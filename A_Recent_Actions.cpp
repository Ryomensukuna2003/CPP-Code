#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

//                                「本 物 の 柔 術 を 見 せ て や る」

#define vll vector<long long int>
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL)
using namespace std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// 5 9 9 5 7

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int,int> m1;
    vll vec1,vec2;

    for(int i=1;i<=m;i++){
        int x;cin>>x;
        m1.insert({x,i});
    }

    int minus=n-m1.size();
    for(int i=0;i<minus;i++){
        cout<<-1<<" ";
    }
    
    for(auto x:m1){
        vec1.pb(x.second);
    }
    sort(vec1.begin(),vec1.end());

int limit;
    if(minus>0){
        limit=n-minus;
    }
    else{
        limit=n;
    }
    for(int i=0;i<limit;i++){
        vec2.pb(vec1[i]);
    }
sort(vec2.rbegin(),vec2.rend());
    for(auto x:vec2){
        cout<<x<<" ";
    }
    cout<<endl;

}

int main()
{
    FAST;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
