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
    int n;cin>>n;
    vector<ll>vec1;
    int sum1=pow(2,n);
    int sum2=pow(2,n-1);
    for(int i=1;i<=n-2;i++){
        vec1.push_back(pow(2,i));
    }
    for(int i=0;i<vec1.size()/2;i++){
        sum1+=vec1[i];
        sum2+=vec1[vec1.size()-(i+1)];
    }
    cout<<abs(sum1-sum2)<<endl;
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
