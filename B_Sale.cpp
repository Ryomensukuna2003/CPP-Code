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
    int n,x;cin>>n>>x;
    vector<int> vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x<=0){
            vec1.push_back(x);
        }
    }
    sort(all(vec1));
    int sum=0;
    if(x>vec1.size()){
        for(int i=0;i<vec1.size();i++){
        sum+=vec1[i];
    }
    }
    else{
        for(int i=0;i<x;i++){
        sum+=vec1[i];
    }
    }
    
    cout<<abs(-1*sum)<<endl;
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
