#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a;
    cin>>a;
    string str1=" I hate that";
    string str2=" I love that";
    string str3;
    if(a==1){
        cout<<" I hate it"<<endl;
    }
    else if(a==2){
        cout<<"I hate that I love it"<<endl;
    }
    else{
        if(a%2!=0){
            for(int i=0;i<a/2;i++){
                cout<<str1<<str2;
            }
            cout<<" I hate it";
        }
        else{
            for(int i=0;i<a/2;i++){
                str3=str3+str1+str2;
            }
            str3.erase((12*a)-4,12*a);
            cout<<str3<<"it";
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
