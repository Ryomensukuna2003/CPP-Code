#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string a;
    cin>>a;
    char var=a[1];
    set <char> set1;
    for(int i=1;i<1000;i++){
        string x;cin>>x;
        char y=x[0];
        set1.insert(y);
    }
    set1.insert(var);
    // for(auto element : set1){
    //     cout<<element<<" ";
    // }
    if( a[0]=='{' && a[1]=='}'){
        cout<<"0";
    }
    else{
        cout<<set1.size()-1;
    }

    // set <string> vec1;
    // for(int i=0;i<1000;i++){
    //     string x;
    //     cin>>x;
    //     cout<<x[1];
        // int y=(int)x[1];
        // string y=x[1];
        // vec1.insert(y);
    // }
    // for(auto element:vec1){
    //     cout<<element<<" ";
    // }
    // cout<<endl<<vec1.size();

}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
