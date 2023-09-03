#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
void solve()
{
    int n;cin>>n;
    vector<int> vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.pb(x);
    }
    int x,y;cin>>x>>y;
    if(x>y){
        swap(x,y);
    }
    int total=0,tot2=0,tot1=0;
    
    for(int i=0;i<n;i++){
        total=total+vec1[i];
    }
    for(int i=x-1;i<y-1;i++){
        tot1=tot1+vec1[i];
    }
    tot2=total-tot1;
    cout<<min(tot1,tot2);
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
