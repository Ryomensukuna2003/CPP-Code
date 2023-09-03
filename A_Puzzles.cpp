#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,n,maxi,mini;
    cin>>a>>n;
    vector<int> vec2;
    vector<int> vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.push_back(x);
    }
    sort(vec1.begin(),vec1.end());
    for(int i=0;i<n-a+1;i++){
        maxi=*max_element(vec1.begin()+i,vec1.begin()+(i+a));
        mini=*min_element(vec1.begin()+i,vec1.begin()+(i+a));
        vec2.push_back(maxi-mini);
    }
    cout<<*min_element(vec2.begin(),vec2.end());
    // for(auto it:vec2){
    //     cout<<it<<" ";
    // }
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
