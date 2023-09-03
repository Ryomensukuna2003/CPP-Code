#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace  __gnu_pbds;
#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
#define all(x)   (x).begin(), (x).end()
#define mod      1000000007
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
using namespace  std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;

void solve()
{
    int n;cin>>n;
    vll vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.pb(x);
    }
    bool count=false;
    for(int i=0;i<n-1;i++){
        if((vec1[i]==-1) && (vec1[i+1]==-1)){
            count=true;
            break;
        }
    }

    int xyz=0;
    if(count==true){
        cout<<accumulate(all(vec1),0)+4<<endl;
    }
    else{
        for(int i=0;i<n-1;i++){
            if(vec1[i]==1 && vec1[i+1]==-1){
                cout<<accumulate(all(vec1),0)<<endl;
                xyz++;
                break;
            }
            else if(vec1[i]==-1 && vec1[i+1]==1){
                cout<<accumulate(all(vec1),0)<<endl;
                xyz++;
                break;
            }
            // else if(vec1[i]==1 && vec1[i+1]==1){
            //     cout<<accumulate(all(vec1),0)-4<<" bur"<<endl;
            //     break;
            // }
        }
    }
    if(xyz==0 && count==false){
        cout<<accumulate(all(vec1),0)-4<<endl;
    }
}

int main(){
    ll t=1;
    cin>>t;
    while(t--){
        solve();
}
return 0;
}
