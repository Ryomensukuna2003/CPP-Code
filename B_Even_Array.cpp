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
    vector<int> vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.push_back(x);
    }
    int count_even=0;
    int count_odd=0;
    for(int i=0;i<n;i++){
        if(vec1[i]%2==0){
            vec1[i]=0;
        }
        else{
            vec1[i]=1;
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(vec1[i]%2!=0){
                count_even++;
            }
        } 
        else{
            if(vec1[i]%2==0){
                count_odd++;
            }
        }
    }
    
    // for (auto x:vec1){
    //     cout<<x<<" ";
    // }
    // cout<<count_even<<" "<<count_odd<<endl;
    if(count_even!=count_odd){
        cout<<"-1"<<endl;
    }
    else{
        cout<<count_odd<<endl;
    }
    // if(count==count_odd==0){
    //     cout<<0<<endl;
    // }
    // else if(count_odd>count){
    //     cout<<"-1"<<endl;
    // }
    // else{
    //     cout<<(count+count_odd)-1<<endl;
    // }
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
