#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,t;
    cin>>n>>t;
    string a;
    cin>>a;
    while(t--){
        for(int i=0;i<n-1;i++){
            if(a[i]=='B' && a[i+1]=='G'){
                swap(a[i],a[i+1]);
                i++;
            }
        }
    }
    cout<<a;
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
