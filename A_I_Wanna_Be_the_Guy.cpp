#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int level;
    cin>>level;

    int x1;
    cin>>x1;
    vector <int> vec1;
    for(int i=0;i<x1;i++){
        int a;
        cin>>a;
        vec1.push_back(a);
    }
    int x2;
    cin>>x2;
    for(int i=0;i<x2;i++){
        int a;
        cin>>a;
        vec1.push_back(a);
    }
    sort(vec1.begin(),vec1.end());
    // main code
    int ctr=0;
    for(int i=0;i<x1+x2;i++){
        if(vec1[i]==vec1[i+1]){
            ctr++;
        }
    }
// cout<<vec1.size()<<" "<<ctr;
    if((vec1.size()-ctr)==level){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
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
