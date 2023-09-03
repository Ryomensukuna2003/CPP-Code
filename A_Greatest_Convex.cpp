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

int fact(int n) {
  if(n > 1)
    return n * fact(n - 1);
  else
    return 1;
}

int main(){
        int t=1;
        cin>>t;
        // vector <int> vec1;
        while(t--){
            ll n;cin>>n;
            cout<<n-1<<endl;
}
return 0;
}
