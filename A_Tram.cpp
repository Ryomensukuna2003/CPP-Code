#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector <pair<int,int> > vec;
    vector <int> vec1;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    // for (int i=0; i<n; i++)
    // {
    //     cout << vec[i].first << " "<< vec[i].second << endl;
  
    // }
    int val=0;
    for(int i=0;i<n;i++){
        val=(val-vec[i].first)+vec[i].second;
        vec1.push_back(val);
    }
    // for(auto element1:vec1){
    //     cout<<element1<<" ";
    // }
    cout<< *max_element(vec1.begin(), vec1.end());
}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
