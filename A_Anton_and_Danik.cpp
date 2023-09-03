#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,anton=0,danik=0;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]=='A'){
            anton++;
        }
        else{
            danik++;
        }
    }
    
    if(anton==danik){
        cout<<"Friendship"<<endl;
    }
    else if(anton>danik){
        cout<<"Anton"<<endl;
    }
    else if(danik>anton){
        cout<<"Danik"<<endl;
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
