#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,ctr=0;
    cin>>n;
    vector <string> vec1;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        vec1.push_back(x);
    }
    for(int i=0;i<n;i++){
        if(vec1[i]=="Icosahedron"){
            ctr=ctr+20;
        }
        else if(vec1[i]=="Cube"){
            ctr=ctr+6;
        }
        else if(vec1[i]=="Tetrahedron"){
            ctr=ctr+4;
        }
        else if(vec1[i]=="Octahedron"){
            ctr=ctr+8;
        }
        else if(vec1[i]=="Dodecahedron"){
            ctr=ctr+12;
        }
    }
    cout<<ctr;
    

}
int main(){
        int t=1;
        // cin>>t;
        while(t--){
        solve();
}
return 0;
}
