#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,ctr=0;
    cin>>n;
     vector <pair<int,int>> vec1;

     for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vec1.push_back(make_pair(a,b));
     }

     for(int i=0;i<n;i++){
        if((vec1[i].second-vec1[i].first)>=2){
            ctr++;
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
