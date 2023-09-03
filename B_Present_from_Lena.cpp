#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace  __gnu_pbds;
 
//                                「本 物 の 柔 術 を 見 せ て や る」
 
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
    int count=0;

    for(int i=0;i<n+1;i++){

        for(int j=n-i-1;j>=0;j--){
            cout<<"  ";
        }

        for(int j=0;j<=i;j++){
            if(i==0){
                cout<<j;
                count++;
                continue;
            }

            cout<<j<<" ";
            count++;
        }

        count--;
        while(count>=0){
            if(i==0){
                count--;
                continue;
            }
            if(count==0){
                cout<<count;
                count--;
                continue;
            }
            cout<<count<<" ";
            count--;
        }

        cout<<endl;
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<=i;j++){
            cout<<"  ";
        }

        for(int j=0;j<=n-i-1;j++){
            if(i==n-1){
                cout<<j;
                count++;
                continue;
            }

            cout<<j<<" ";
            count++;
        }
        count--;
        while(count>=0){
            if(count==0){
                cout<<count;
                count--;
                continue;
            }
            cout<<count<<" ";
            count--;
        }


        cout<<endl;
    }

}

int main(){
    FAST;
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
}
return 0;
}
