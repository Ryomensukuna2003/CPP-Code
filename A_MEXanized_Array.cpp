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


void solve()
{
    int n,b,c;cin>>n>>b>>c;
    vector<int>vec1;
    if(b>n || c<b-1){
        cout<<-1<<endl;
        return;
    }
    else{
        for(int i=0;i<n-b;i++){
            if(b!=c){
                vec1.push_back(c);
            }
        }
        for(int i=0;i<b;i++){
            vec1.push_back(i);
        }
        int temp=vec1.size();
        for(int i=0;i<n-temp;i++){
            vec1.push_back(b-1);
        }
    }
    // forout(vec1);cout<<endl;
    cout<<accumulate(vec1.begin(),vec1.end(),0);
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
