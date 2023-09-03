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
    int a;cin>>a;
    vector<int>vec1;
    if(a>45){
        cout<<-1<<endl;
    }
    else if(a<10){
        cout<<a<<endl;
    }
    else{
        for(int i=9;i>0;i--){
        if(a<9 && a<=i){
            vec1.pb(a);
            break;
        }
        vec1.pb(i);
        a=a-i;
        }
        reverse(all(vec1));
        for(auto x:vec1){
            cout<<x; 
        }
        cout<<endl;
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
