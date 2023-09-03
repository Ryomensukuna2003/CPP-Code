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
typedef tree<ll, null_type, less<ll>, rb_tree_tag,                                                               tree_order_statistics_node_update> pbds;
#define mod 1000000007
void solve()
{
    int n;cin>>n;
    vector<int> vec1;
    int x=2;
    int y=1;
    
    for(int i=0;i<n/2;i++){
        vec1.push_back(x);
        x+=2;
    }

    int sum=accumulate(all(vec1),0);

    for(int i=0;i<(n/2)-1;i++){
        vec1.push_back(y);
        y+=2;
    }
    int sum2=(accumulate(vec1.begin()+(n/2),vec1.end(),0));

    if((sum-sum2)%2!=0){
        cout<<"YES"<<endl;
        vec1.push_back(sum-sum2);
        for(auto x:vec1){
            cout<<x<<" ";
        }
    }
    else{
        cout<<"NO";
    }

    cout<<endl;
    vec1.clear();
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
