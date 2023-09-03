#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b;
    cin>>a>>b;
    a=a*2;
    b=b*5;
    if(a>b){
        cout<<"Chocolate"<<endl;
    }
    else if(b>a){
        cout<<"Candy"<<endl;
    }
    else{
        cout<<"Either"<<endl;
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
