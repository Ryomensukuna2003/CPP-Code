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
    vector <string> vec1(n);
    for(int i=0;i<n;i++){
        cin>>vec1[i];
    }
    string x1=vec1[0];
    string x2;
    for(int i=1;i<n;i++){
        if(vec1[i]!=x1){
            x2=vec1[i];
        }
    }
    int count1=0;
    for(int i=0;i<n;i++){
        if(vec1[i]==x1){
            count1++;
        }
    }
    int count2= vec1.size()-count1;
    if(count1>count2){
        cout<<x1;
    }
    else{
        cout<<x2;
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
