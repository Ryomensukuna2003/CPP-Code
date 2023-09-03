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
    vector <int> vec1(n);
    vector <int> vec2(n);
    for(int i=0;i<n;i++){
        cin>>vec1[i];
    }
    for(int i=0;i<n;i++){
        cin>>vec2[i];
    }

    int ctr=0,max=0;
    for(int i=0;i<n;i++){
        if(vec1[i]!=0 && vec2[i]!=0){
            ctr++;
        }
        else{
            if(ctr>max){
                max=ctr;
            }
            ctr=0;

        }
    }
    if(ctr>max){
        max=ctr;
    }
    cout<<max<<endl;
}

int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
