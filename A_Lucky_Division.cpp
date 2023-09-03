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
    int ctr=0;
    vector <int> vec1;
    vec1={4,7,44,77,47,74,444,777,477,744,474,747,447};
    for(int i=0;i<vec1.size();i++){
        if(n%vec1[i]==0){
            ctr++;
            break;
        }
    }
    if(ctr>0){
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
