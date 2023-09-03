#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <string>
using namespace  __gnu_pbds;
 
//                                「本 物 の 柔 術 を 見 せ て や る」
 
#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
#define all(x)   (x).begin(), (x).end()
#define mod      1000000007
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
using namespace  std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;

void solve()
{
    int n;cin>>n;
    vector <char> vec1;
    int plus=0,minus=0,zero=0;
    string a;cin>>a;

    for(int i=0;i<n;i++){
        
        if(a[i]=='+'){
            plus++;
        }
        else if(a[i]=='-'){
            minus++;
        }
        else{
            zero++;
        }
        
        if(a[i]=='0' && a[i+1]=='0'){
            continue;
        }
        else{
            vec1.pb(a[i]);
        }
    }
    string x;
    for(int i=0;i<vec1.size();i++){
        x+=vec1[i];
    }
    // cout<<x<<endl;
    int count=0;
    for(int i=0;i<vec1.size();i++){
        if(x.find("+0-")){
            count++;
            cout<<count<<" ";
        }
        else if(x.find("-0+")){
            count++;
            cout<<count<<" ";
        }
    }
    cout<<endl;
    // cout<<count<<endl;
    // 
    // if(n<3){
    //     if(minus==0 && plus==0){
    //         cout<<zero<<endl;
    //     }
    //     else{
    //         cout<<0<<endl;
    //     }
    // }
    // else{
    //     for(int i=0;i<vec1.size()-2;i++){
    //     if(vec1[i]=='+' && vec1[i+1]=='0' && vec1[i+2]=='-'){
    //         count++;
    //     }
    //     else if(vec1[i]=='-' && vec1[i+1]=='0' && vec1[i+2]=='+'){
    //         count++;
    //     }
    //     }
    //     cout<<count<<endl;
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
