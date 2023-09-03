#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string a,b;
    cin>>a>>b;
    vector<int> vec1;

    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            int x=0;
            vec1.push_back(x);
        }
        else{
            int x=1;
            vec1.push_back(x);
        }
    }
    for(auto element:vec1){
        cout<<element;
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
