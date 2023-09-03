#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b,n;cin>>a>>b>>n;
    int gcd=0,ctr=0;
    for(int i=0;i>-1;i++){
        if(i%2==0){
            gcd=__gcd(a,n);
            // cout<<gcd<<endl;
            n=n-gcd;
            ctr++;
        }
        else{
            gcd=__gcd(b,n);
            // cout<<gcd<<endl;
            n=n-gcd;
            ctr++;
        }
        
        if(n==0){
            break;
        }
    }
    if(ctr%2==0){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    // cout<<ctr;
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
