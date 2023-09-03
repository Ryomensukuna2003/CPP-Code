#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(arr1[j]==i){
                cout<<j+1<<" ";
            }
        }
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
