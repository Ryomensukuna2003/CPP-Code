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
    int a=0,b=0,c=0,d=0,count=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==1){
            a++;
        }
        else if(x==2){
            b++;
        }
        else if(x==3){
            c++;
        }
        else{
            d++;
        }
    }
// 4 number
    count+=d;
// 3 number
    if(a>=c){
        a=a-c;
        count+=c;
    }
    else{
        count+=c;
    }
// 2 number
    count+=floor(b/2);
    b=b%2;
    if(a>b){
        a=a-b;
        count+=b;
    }
// 1 number
    count+=a/4;
    a=a%4;
    count+=a;
    // cout<<a<<" "<<b<<" "<<c<<" "<<d;
    cout<<count<<endl;

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
