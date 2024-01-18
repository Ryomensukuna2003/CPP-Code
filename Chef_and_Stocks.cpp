#include <bits/stdc++.h>
using namespace  std;


void solve()
{
    int n;cin>>n;
    vector<long long> vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.push_back(x);
    }
    int mini=*min_element(vec1.begin(),vec1.end());
    int ans=accumulate(vec1.begin(),vec1.end(),0)-mini;
    cout<<ans<<endl;
}

int main(){
    
    long long t=1;
    cin>>t;
    while(t--){
        solve();
}
return 0;
}
