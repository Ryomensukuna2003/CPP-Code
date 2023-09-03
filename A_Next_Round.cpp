#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,x,ctr=0;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
     }
    int val=arr[x-1];
    
    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            continue;
        }
        else if(arr[i]>=val){
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
