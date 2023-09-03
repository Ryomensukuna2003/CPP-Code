#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string a,b;
    int ctr1=0,ctr2=0;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if(a==b){
        cout<<"0"<<endl;
    }
    else{
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                continue;
            }
            else if(a[i]<b[i]){
                ctr2++;
                break;
            }
            else if(a[i]>b[i]){
                ctr1++;
                break;
            }
        }
        if(ctr1>0){
        cout<<"1"<<endl;
    }
    else if(ctr2>0){
        cout<<"-1"<<endl;
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
