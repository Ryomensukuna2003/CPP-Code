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
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;

bool substringcheck(string s1,string s2){
    // String 1 in String 2
    if (s2.find(s1) != std::string::npos) return true;
    else return false;
}

void solve()
{
    int n;cin>>n;
    string s1;cin>>s1;
    bool istrue=false;
    string s2;
    for(int i=0;i<n;i++){
        char x=tolower(s1[i]);
        s2+=(x);
    }
    char arr[4]={'m','e','o','w'};
    int count=0,j=0;
    for(int i=0;i<n;i++){
        if(s2[i]!=arr[j]){
            count=0;
            cout<<"NO"<<endl;
            return;
        }
        if(s2[i]==arr[j]){
            if(!istrue){
                count++; 
            }
            istrue=true;
        }
        if(s2[i]!=s2[i+1]){
            j++;
            istrue=false;
        }
    }
    // cout<<count<<endl;
    if(count==4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

// 1 1 1 1