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

bool substringcheck(string s1,string s2){
    // String 1 in String 2
    if (s2.find(s1) != std::string::npos) return true;
    else return false;
}

void solve()
{
    vll vec1,vec2;
    int n;cin>>n;
    if(n==1){
        cout<<"NO"<<endl;
        return;
    }
    if(n%2==0){
        
        
// first set;
        for(int i=1;i<=n/2;i++){
            vec1.pb(i);
            i++;
        }
        for(int i=(n/2)+2;i<=n;i++){
            vec1.pb(i);
            i++;
        }
// second set;
// 1 2 3 4 5 6 7
        for(int i=2;i<=n/2;i++){
            vec2.pb(i);
            i++;
        }
        for(int i=(n/2)+1;i<=n;i++){
            if(i==n/2){
                i++;
                continue;
            }
            vec2.pb(i);
            i++;
        }
    }
    else{
        
        vec2.pb(n);
        n-=1;
// first set;
        for(int i=1;i<=n/2;i++){
            vec1.pb(i);
            i++;
        }
        for(int i=(n/2)+1;i<=n;i++){
            vec1.pb(i);
            i++;
        }
// second set;
// 1 2 3 4 5 6 7
        for(int i=2;i<=n/2;i++){
            vec2.pb(i);
            i++;
        }
        for(int i=(n/2);i<=n;i++){
            if(i==n/2){
                i++;
                continue;
            }
            vec2.pb(i);
            i++;
        }
    }


    int sum1,sum2;
    sum1=accumulate(all(vec1),0);
    sum2=accumulate(all(vec2),0);
    if(sum1==sum2){
        cout<<"YES"<<endl;
        cout<<vec1.size()<<endl;
        for(auto x:vec1){
            cout<<x<<" ";
        }cout<<endl;
        cout<<vec2.size()<<endl;
        for(auto x:vec2){
            cout<<x<<" ";
        }cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
