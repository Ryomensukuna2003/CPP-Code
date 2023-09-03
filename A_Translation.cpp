#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string a,b;
    cin>>a>>b;
    int n=a.size();
    for (int i=0;i<n/2;i++){
        swap(a[i],a[n-i-1]);
        
    }
    if(a==b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
