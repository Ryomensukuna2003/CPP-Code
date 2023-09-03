#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;
#define mod 1000000007
void solve()
{
    int n;cin>>n;
    vector<int>vec1(n);
    for(int i=0;i<n;i++){
        cin>>vec1[i];
    }
    int count1=0,count2=0;
    sort(all(vec1),greater<>());
    for(int i=0;i<n;i++){
        count1+=vec1[i];
        count2+=vec1[i+1];
        if(count2<count1){
            count2+=vec1[i+2];
            i++;
        }
        i++;
    }
    if(count1==count2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
