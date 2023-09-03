#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
void solve()
{
    string a;cin>>a;
    for(int i=0;i<a.size();i++){
        a[i]=tolower(a[i]);
    }
    
    vector <char> vec1;
    for(int i=0;i<a.size();i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y'){
            continue;
        }
        else{
            vec1.push_back(a[i]);
        }
    }
    for(auto x:vec1){
        cout<<"."<<x;
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
