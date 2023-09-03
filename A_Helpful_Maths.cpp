#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string a,b,c="+";
    int ctr=0;
    cin>>a;
    
    for(int i=0;i<a.size();i++){
        if(a[i]!='+'){
            b.push_back(a[i]);
        }
    }

    int n=b.size();
    sort(b.begin(),b.end());
    cout<<b[0];
    for(int i=1;i<b.size();i++){
        cout<<"+"<<b[i];
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
