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
    if (s2.find(s1) != std::string::npos) return true;
    else return false;
}

// 1 2 3 3 

void solve()
{
    int x,y,n;cin>>x>>y>>n;
    int val=y-x;
    int sum_val=n-1;
    deque<int>q1;
    if(((sum_val*(sum_val+1))/2)>val){
        // cout<<((sum_val*(sum_val+1))/2)<<" ";
        cout<<"-1"<<endl;
        return;
    }
    else{
        // q1.push_back(y-1);
        q1.push_back(y);
int count=1;
        for(int i=1;i<=n-2;i++){
            q1.push_front(y-(count));
            count++;
            count+=i;
        }
        q1.push_front(x);
    }
    for(auto x:q1){
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
