#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,ctr=0;
    cin>>n;
    string a;
    cin>>a;
    for (int x=0; x<n; x++){
        a[x]=(tolower(a[x]));
    }
    
    set <int> vec1;
    for(int i=0;i<a.size();i++){
        int x=(int)a[i];
        vec1.insert(x);
    }
    // for(auto element:vec1){
    //     cout<<element<<" ";
    // }
    if(vec1.size()>25){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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
