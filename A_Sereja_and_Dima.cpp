#include <bits/stdc++.h>
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int>vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.pb(x);
    }
    int Sereja=0,Dima=0,remove;
    for(int i=0;i<vec1.size();i++){
        if((i&1)==0){
            Sereja+=max(vec1[i],vec1[vec1.size()-i-1]);
            if(vec1[i]>vec1[vec1.size()-i-1]){
                remove=i;
            }
            else{
                remove=(vec1.size()-i-1);
            }
            vec1.erase(vec1.begin()+remove);
        }
        else{
            Dima+=max(vec1[i],vec1[vec1.size()-i-1]);
            if(vec1[i]>vec1[vec1.size()-i-1]){
                remove=i;
            }
            else{
                remove=(vec1.size()-i-1);
            }
            vec1.erase(vec1.begin()+remove);
        }
    }
    for(auto x:vec1){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<Sereja<<" "<<Dima<<endl;
}
int main(){
        int t=1;
        while(t--){
        solve();
}
return 0;
}
