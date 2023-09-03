#include "bits/stdc++.h"
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
    int n;cin>>n;
    int count=0;
    int temp;
    while(n>0){
        if(n>=100){
            temp=n/100;
            count+=temp;
            n=n-(temp*100);
        }
        else if(n<100 && n>=20){
            temp=n/20;
            count+=temp;
            n=n-(temp*20);
        }
        else if(n<20 && n>=10){
            temp=n/10;
            count+=temp;
            n=n-(temp*10);
        }
        else if(n<10 && n>=5){
            temp=n/5;
            count+=temp;
            n=n-(temp*5);
        }
        else if(n<5 && n>=1){
            count+=n;
            n=0;
        }
    }
    cout<<count<<endl;
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
