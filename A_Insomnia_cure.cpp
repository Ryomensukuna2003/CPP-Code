#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
void solve()
{
    int a,b,c,d,num;cin>>a>>b>>c>>d>>num;
    int ctr=0;

    for(int i=1;i<=num;i++){
        if(i%a!=0 && i%b!=0 && i%c!=0 && i%d!=0){
            ctr++;
        }
    }
    cout<<num-ctr;
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;

}
