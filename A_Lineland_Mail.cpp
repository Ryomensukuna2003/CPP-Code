#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int>vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.push_back(x);
    }
    cout<<abs(vec1[0]-vec1[1])<<" "<<abs(vec1[0]-vec1[n-1])<<endl;

    for(int i=1;i<n-1;i++){
        cout<<min(abs(vec1[i]-vec1[i-1]),abs(vec1[i]-vec1[i+1]))<<" "<<max(abs(vec1[i]-vec1[0]),abs(vec1[i]-vec1[n-1]))<<endl;
    }

    cout<<abs(vec1[n-1]-vec1[n-2])<<" "<<abs(vec1[n-1]-vec1[0])<<endl;

}
int main(){
        int t=1;
        while(t--){
        solve();
}
return 0;
}
