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
    int n,k,q;cin>>n>>k>>q;
    ll sum=0;
    int count=0;
    vll vec1 ,vec2;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x<=q){
            vec1.pb(1);
        }
        else{
            vec1.pb(0);
        }
    }

    for(int i=0;i<n;i++){
        
        if(vec1[i]==1){
            count++;
        }         
        else if(vec1[i]==0){
            if(count>=k ){
                vec2.pb(count);
            }
            count=0;
        } 
        if(i==n-1 && count>=k){
            vec2.pb(count);
        }
    }
    forout(vec2);
    // if(vec2.size()==0){
    //     cout<<0;
    // }
    // else{
    //     for(int i=0;i<vec2.size();i++){
    //         sum+=(vec2[i]*(vec2[i]+1))/2;
    //     }
    //     cout<<sum;
    // }
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

// 2 - 1,2,12                                                  3
// 3 - 1,2,3,12,23,123                                         6
// 4 - 1,2,3,4,12,23,34,123,234,1234                           10
// 5 - 1,2,3,4,5,12,23,34,45,123,234,345,1234,2345,12345       15


// 1*5 2*4 3*3 4*2 5*1
// n(n+1)/2