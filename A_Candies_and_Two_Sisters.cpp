#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    cout<<fixed;
    cout<<setprecision(0);
    ll n;cin>>n;
    vector <ll> vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.push_back(x);
    }
    // for(auto element:vec1){
    //     cout<<element<<" ";
    // }
    
    for(int i=0;i<n;i++){
    if(vec1[i]==1 || vec1[i]==2){
        cout<<"0"<<endl;
    }
    else if(vec1[i]%2==0){
        cout<<floor(vec1[i]/2)-1<<endl;
    }
    else{
        cout<<floor(vec1[i]/2)<<endl;
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
