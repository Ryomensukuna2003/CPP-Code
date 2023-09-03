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

    string a;cin>>a;

    vector<int>vec1;
    for(int i=0;i<n;i++){
        vec1.pb(a[i]);
    }
    int count=0,max_count=0;
    int sum=0;
    if(n==1){
        if(vec1[0]==49){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else if(vec1[0]==49){
        for(int i=0;i<n-1;i++){
            if(vec1[i]==vec1[i+1]){
                sum++;
            }
            else{
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            if(vec1[i]==vec1[i+1]==1){
                count++; 
            }
            else{
                count=0;
            }
            if(count>=max_count){
                max_count=count;
            }
        }
        cout<<(max_count+1)+(sum+1)<<endl;
        // cout<<sum<<" "<<max_count<<endl;
    }
    else{
        for(int i=0;i<vec1.size()-1;i++){
            if(vec1[i]==vec1[i+1]==1){
                count++; 
            }
            else{
                count=0;
            }
            if(count>=max_count){
                max_count=count;
            }
        }
    cout<<max_count+1<<endl;
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

