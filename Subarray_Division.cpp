#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,val=0,ctr=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d,m;
    cin>>d>>m;
    if(m>d){
        cout<<"0"<<endl;
    }
    else{
        for(int i=0;i<m;i++){
            val=val+arr[i];
            cout<<val<<endl;
            if(val==d);
            ctr++;
        }
    }
    // cout<<ctr<<endl;
    
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
