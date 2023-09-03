#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    
    int n; int a,b,c,d; cin>>n;
    while(true){
        n++;
        a=n%10; 
        b= (n/10)%10; 
        c= (n/100)%10; 
        d= (n/1000)%10; 
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        break;
        }
        cout<<n;
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
