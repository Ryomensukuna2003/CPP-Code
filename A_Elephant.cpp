#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a;
    cin>>a;
    int val=floor(a/5);
    if(a%5==0){
        cout<<val<<endl;
    }
    else{
        cout<<val+1<<endl;
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
