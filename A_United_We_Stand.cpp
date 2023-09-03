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
    int n;cin>>n;
    vll vec1,vec2,vec3;
    int count=0;
    bool istrue=false;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec3.pb(x);
        if(x%2==0){
            vec1.pb(x);
        }
        else{
            vec2.pb(x);
        }
    }
    if(vec1.size()==0 || vec2.size()==0){
        vec1.clear();
        vec2.clear();
        sort(all(vec3)); 
        for(int i=0;i<n;i++){
            if(vec3[i]==vec3[n-1]){
                count++;
                vec2.pb(vec3[n-1]);
            }
        }   
        for(int i=0;i<n-count;i++){
            vec1.pb(vec3[i]);
        }
        for(int i=0;i<vec1.size();i++){
            if(vec2[0]==vec1[i]){
                istrue=true;
            }
        }
        if(istrue || (vec1.size()==0 || vec2.size()==0)){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<vec1.size()<<" "<<vec2.size()<<endl;
    forout(vec1)
    cout<<endl;
    forout(vec2)
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
