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
    int k;cin>>k;
    vector<int> vec1(12);
    for(int i=0;i<12;i++){
        cin>>vec1[i];
    }
    sort(vec1.begin(),vec1.end(),greater<>());
    int count=0;
    
    if(k==0){
        cout<<0<<endl;
    }
    else{

    for(int i=0;i<12;i++){
        count+=vec1[i];
        if(count>=k){
            cout<<i+1;
            break;
        }
    }
    }
    if(count<k){
        cout<<-1;
    }
}

int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
