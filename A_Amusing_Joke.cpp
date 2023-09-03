#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
void solve()
{
    string a,b,c;cin>>a>>b>>c;
    vector <char> vec1;
    vector <char> vec2;
    vector <char> vec3;
    for(int i=0;i<a.size();i++){
        vec1.push_back(a[i]);
    }
    for(int i=0;i<b.size();i++){
        vec2.push_back(b[i]);
    }
    for(int i=0;i<c.size();i++){
        vec3.push_back(c[i]);
    }
    
    vec1.insert( vec1.end(), vec2.begin(), vec2.end() );
    sort(vec1.begin(),vec1.end());
    sort(vec3.begin(),vec3.end());
    if(vec1==vec3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // for(auto x:vec1){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // // for(auto x:vec2){
    // //     cout<<x<<" ";
    // // }
    // cout<<endl;
    // for(auto x:vec3){
    //     cout<<x<<" ";
    // }
    
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
