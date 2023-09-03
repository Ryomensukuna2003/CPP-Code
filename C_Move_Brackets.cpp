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
    vector <char> vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        cin>>vec1[x];
    }
    for(int i=0;i<vec1.size();i++){
        if(vec1[i]=='(' && vec1[i+1]==')'){
            vec1.erase(vec1.begin()+i);
            vec1.erase(vec1.begin()+i);
            i=i+1;
        }
    }
    

    cout<<endl;
    for(auto x:vec1){
        cout<<x<<" ";
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
