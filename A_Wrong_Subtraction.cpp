#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,n;
    cin>>a>>n;
    for(int i=0;i<n;i++){
        if(a%10==0){
            a=a/10;
        }
        else{
            a=a-1;
        }
    }
    cout<<a<<endl;
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
