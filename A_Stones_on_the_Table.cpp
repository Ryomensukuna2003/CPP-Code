#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,ctr=0;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]==a[i+1]){
            ctr++;
        }
    }
    cout<<ctr<<endl;
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
