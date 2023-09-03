#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define mod 1000000007
void solve()
{
    int n;cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    for(int i=0;i<n;i++){
        if(arr1[i]>arr2[i]){
            swap(arr1[i],arr2[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    // cout<<*max_element(arr1,arr1+n)-*min_element(arr1,arr1+n)<<" "<<*max_element(arr2,arr2+n)-*min_element(arr2,arr2+n);
    cout<<endl;

}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
