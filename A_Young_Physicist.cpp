#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
void solve()
{
    int n;cin>>n;
    vector <int> vec1;
    vector <int> vec2;
    vector <int> vec3;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.push_back(x);
        int y;cin>>y;
        vec2.push_back(y);
        int z;cin>>z;
        vec3.push_back(z);
    }
    int x=accumulate(vec1.begin(),vec1.end(),0);
    int y=accumulate(vec2.begin(),vec2.end(),0);
    int z=accumulate(vec3.begin(),vec3.end(),0);
    if(x==0 && y==0 && z==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    // for(auto x:vec1){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(auto x:vec2){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(auto x:vec3){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
