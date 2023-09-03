#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define mod 1000000007
void solve()
{
    int n;cin>>n;
    vector<int>vec1;
    while(n>0){
        int x=n%10;
        vec1.pb(x);
        n/=10;
    }
    int count=0;
    for(int i=0;i<vec1.size();i++){
        if(vec1[i]==7){
            count++;
        }
    }
    if(count>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
