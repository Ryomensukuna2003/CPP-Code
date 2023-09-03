#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    
    vector <int> vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.push_back(x);
    }
    
    cout<<endl;
    int maxi=*max_element(vec1.begin(),vec1.end());
    int mini=*min_element(vec1.begin(),vec1.end());

    int pos1=max_element(vec1.begin(), vec1.end()) - vec1.begin();
    vec1.erase(vec1.begin()+pos1);
    vec1.insert(vec1.begin(),maxi);

    int pos2;
    // cout<<pos2<<endl;
    for(int i=vec1.size()-1;i>=0;i--){
        if (vec1[i]==mini){
            
            pos2=i;
            break;
        }
    }
    // for(auto x:vec1){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(int i=vec1.size()-1;i>=0;i--){
    //     cout<<vec1[i]<<" ";
    // }
    // cout<<endl;
    
    // cout<<endl;
    // cout<<pos1<<endl;
    pos2=vec1.size()-pos2-1;
    cout<<pos1+pos2;

}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
