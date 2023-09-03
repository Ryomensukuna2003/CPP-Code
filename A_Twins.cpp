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
    int ctr=0,val=0,total=0;
    vector <int> vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.push_back(x);
    }
    sort(vec1.begin(),vec1.end(), greater<>());
    // for(auto x:vec1){
    //     cout<<x<<" ";
    // }
    for(int i=0;i<n;i++){
        total=total+vec1[i];
    }
    
    cout<<endl;
    for(int i=0;i<n;i++){
        val=val+vec1[i];
        total=total-vec1[i];
        ctr++;
        if(val>total){
            cout<<ctr;
            break;
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

