#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
void solve()
{
    int n,m;cin>>n>>m;
    int ctr=0;
    if(n==1 && m==1){
        cout<<"2";
    }
    else{
        for(int i=0;i<max(n,m);i++){
        for(int j=0;j<max(n,m);j++){
            if(((i*i)+j==n) && ((j*j)+i==m))
            ctr++;
    }
    }
    cout<<ctr;
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
