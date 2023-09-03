#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b,ctr=0;
    cin>>a>>b;
    if(a==b){
        cout<<"1"<<endl;
    }
    else{
        while(true){
            if(a<=b){
                a=a*3;
                b=b*2;
                ctr=ctr+1;
            }
            else if(a>b){
                break;
            }
        }
    cout<<ctr<<endl;
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
