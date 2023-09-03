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
    int a,b,c,d;cin>>a>>b>>c>>d;
    
    int sum1,sum2;
    
    sum1=sqrt((a*a)+(b*b));
    sum1=sqrt((c*c)+(d*d));
    cout<<sum1<<" "<<sum2<<endl;
    if(sum1==sum2){
        cout<<"EQUAL"<<endl;
    }
    else if(sum1>sum2){
        cout<<"ALEX"<<endl;
    }
    else{
        cout<<"BOB"<<endl;
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
