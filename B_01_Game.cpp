#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define mod 1000000007
void solve()
{
    string a;cin>>a;
    int count=0,zero=0,one=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='1'){
            zero++;
        }
        else{
            one++;
        }
    }
    if((min(zero,one)%2)==0){
        cout<<"NET"<<endl;
    }
    else{
        cout<<"DA"<<endl;
    }
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
