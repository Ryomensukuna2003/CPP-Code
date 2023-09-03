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
    int ctr=1;
    // set <int> set1;
    // for(int i=0;i<n;i++){
    //     int x;cin>>x;
    //     set1.insert(x);
    // }
    vector <int> vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.pb(x);
    }
    sort(vec1.begin(),vec1.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(vec1[i]==vec1[j]){
            ctr++;
        }
        }
    }
    cout<<ctr;

    
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
