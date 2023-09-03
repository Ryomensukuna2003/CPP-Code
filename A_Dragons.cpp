#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
void solve()
{
    int n,s;cin>>n>>s;
    vector <pair <int ,int>> vec1;
    for(int i=0;i<s;i++){
        int x,y;cin>>x>>y;
        vec1.push_back(make_pair(x,y));
    }
    sort(vec1.begin(),vec1.end());
    // vec1[0].swap(vec1[1]);
    // for(int i=0;i<s;i++){
    //     cout<<vec1[i].first<<" "<<vec1[i].second<<endl;
    // } 
    int ctr=0;
    for(int i=0;i<s;i++){
        if(n-vec1[i].first<=0){
            ctr++;
            break;
            // if(s>1){
            //     for(int i=1;i<s;i++){
            //     vec1[i].swap(vec1[i+1]);
            //     if(n-vec1[i].first<0){
            //         ctr++;
            //         break;
            //     }
            // } 
            // } 
            // else{
            //     ctr++;
            // }          
        }
        else{
            n=n+vec1[i].second;
        }
    }
    if(ctr>0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES";
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
