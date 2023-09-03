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
    vector<int>vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.pb(x);
    }
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        if(vec1[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    int count=0;
    int odd_count=0;
    if(odd>=3){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            if(vec1[i]%2!=0){
                cout<<i+1<<" ";
                count++;
            }
            if(count==3){
                break;
            }
        }
        cout<<endl;
    }
    
    else if(odd>0 && even>=2){
        cout<<"YES"<<endl;

        for(int i=0;i<n;i++){
            if(vec1[i]%2==0){
                cout<<i+1<<" ";
                count++;
            }
            if(count==2){
                break;
            }
        }
        for(int i=0;i<n;i++){
                if(vec1[i]%2!=0){
                    cout<<i+1<<" ";
                    odd_count++;
                }
                if(odd_count==1){
                    break;
                }
            }
        cout<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
