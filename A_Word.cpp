#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string a;
    cin>>a;
    int upper=0,lower=0;
    vector<int> vec1;
    for(int i=0;i<a.size();i++){
        vec1.push_back(int(a[i]));
    }
    // for(auto element : vec1){
    //     cout<<element<<" ";
    // }
    for(int i=0;i<a.size();i++){
        if(vec1[i]>=65 && vec1[i]<=90){
            upper++;
        }
        else{
            lower++;
        }
    }
    // cout<<upper<<" "<<lower;
    if(upper>lower){
        for(int i=0;i<a.size();i++){
            a[i]=toupper(a[i]);
        }
    }
    else{
        for(int i=0;i<a.size();i++){
            a[i]=tolower(a[i]);
        }
    }
    cout<<a<<endl;
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
