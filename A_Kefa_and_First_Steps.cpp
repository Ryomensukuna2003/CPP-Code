#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
void solve()
{
    ll n;cin>>n;
    vector <ll> vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.push_back(x);
    }
    int ctr1=1,maxcount=INT_MIN;
    if(n==1){
        cout<<"1"<<endl;
    }
    else{
        for(int i=0;i<n-1;i++){
        if(vec1[i]<=vec1[i+1]){
            ctr1++;
        }
        if(vec1[i]>vec1[i+1]){
            ctr1=1;
        }
        if(ctr1>maxcount){
            maxcount=ctr1;
        }
    }
    cout<<maxcount;
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
