#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int row,col,ctr=0;
    cin>>col>>row;
    
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int i=0;i<row;i++){
            cout<<"#";
            }
            cout<<endl;
        }
        
        else{
            if(ctr%2==0){
                for(int i=0;i<row-1;i++){
                cout<<".";
            }
                ctr++; 
                cout<<"#";
            }

            else{
                cout<<"#";
                for(int i=0;i<row-1;i++){
                cout<<".";
            }   
                ctr++;
        }
        cout<<endl;    
    }
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
