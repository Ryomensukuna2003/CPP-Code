#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string a;
    cin>>a;
    vector <char> vec1;
    int n=a.size();
    for(int i=0;i<n;i++){
        int x=a[i];
        vec1.push_back(x);
    }
    for(int i=0;i<a.size();i++){
        
        if(vec1[i]=='W' && vec1[i+1]=='U' && vec1[i+2]=='B'){
            i=i+2;
            cout<<" ";
            
        }
        else{
            cout<<a[i];
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
