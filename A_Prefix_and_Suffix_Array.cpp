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

bool compare(string &s1,string &s2)
{
    return s1.size() < s2.size();
}

void solve()
{
    int n;cin>>n;
    vector<string>vec1;
    string s1="",s2="";
    for(int i=0;i<2*n-2;i++){
        string s;cin>>s;
        vec1.pb(s);
        s1+=s;
    }
    int sizee=vec1.size();
    
    sort(all(vec1),compare);
    s2+=vec1[sizee-1]+vec1[sizee-2];
    
    string s3;
    s3=s2;
    reverse(all(s3));
    if(s2==s3){
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
