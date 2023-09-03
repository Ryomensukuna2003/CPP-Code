#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int cost,money,n,x=0;
    cin>>cost>>money>>n;

    for(int i=1;i<=n;i++){
        x=x+cost*i;
    }
    if(x<=money){
        cout<<"0";
    }
    else{

    cout<<abs(x-money);
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
