#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string a;
    cin>>a;
    int n=a.size();
    if(n>10){
        cout<<a[0]<<n-2<<a[n-1]<<endl;
    }
    else{
        cout<<a<<endl;
    }
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
