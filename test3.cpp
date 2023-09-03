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
    if (s2.find(s1) != string::npos) return true;
    else return false;
}

// codechef
// codecook
// odeckooc



void solve()
{
    string s;cin>>s;
    string s2=s;
    string check="codechef";
    // int count=0,max_count=0;
    // sort(all(s));
    // for(int i=0;i<s.size()-1;i++){
    //     if(s[i]!=s[i+1]) count=0;
    //     else if(s[i]==s[i+1]) count++;

    //     if(max_count<count) max_count=count;
    // }
    // max_count++;

    // if(max_count>4){
    //     cout<<-1<<endl;
    // }
    // else{
        if(s2.size()!=8){
            cout<<-1<<endl;
            return;
        }
        for(int i=0;i<s2.size();i++){
            if(s2[i]==check[i]){

                for(int j=0;j<s2.size();j++){
                    if(s2[i]!=check[j] && s2[j]!=check[i]){
                        swap(s2[i],s2[j]);
                        break;
                    }
                }
            }
            if(s2[i]==check[i]){
                cout<<-1<<endl;
                return;

            }
        }
            cout<<s2<<endl;
        
    // }

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
