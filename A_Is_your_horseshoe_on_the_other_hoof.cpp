#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int arr[4],ctr=0;
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    for(int i=0;i<4;i++){
        if(arr[i]==arr[i+1]){
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
