#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace  __gnu_pbds;
 
//                                「本 物 の 柔 術 を 見 せ て や る」
 
#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
#define all(x)   (x).begin(), (x).end()
#define mod      1000000007
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
using namespace  std;
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
    int n;cin>>n;
    vll vec1;
    // cout<<n%10;
    for(int i=0;i<4;i++){
        vec1.pb(n%10);
        n/=10;
    }
    sort(all(vec1));
    // forout(vec1);cout<<endl;
    int count=1;
    int max_count=0;
    for(int i=0;i<3;i++){
        if(vec1[i]==vec1[i+1]){
            count++;
        }
        if(max_count<count){
            max_count=count;
        }
        if(vec1[i]!=vec1[i+1]){
            count=1;
        }
    }

    // cout<<max_count<<endl;
    if(max_count==vec1.size()){
        cout<<"-1"<<endl;
        return;
    }
    else if(max_count==1 || max_count==2){
        cout<<"4"<<endl;
    }
    else{
        cout<<6<<endl;
    }
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
