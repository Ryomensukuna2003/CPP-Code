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


int main(){
    FAST;
    int test;
    cin>>test;
    map<string,int>m1;
    for(int i=0;i<test;i++){
        int x;cin>>x;
        string a;int val;
        if(x==1){
            cin>>a>>val;
            m1[a]+=val;
        }
        else if(x==2){
            cin>>a;
            m1.erase(a);
        }
        else{
            cin>>a;
            cout<<m1[a]<<endl;

        }
    }
    
return 0;
}
