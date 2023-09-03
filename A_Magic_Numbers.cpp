#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;cin>>a;
    int count=0,ctr=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!='1' && a[i]!='4'){
            count++;
            break;
        }
    }
    // for(int i=0;i<a.size()-2;i++){
    //     if(a[i]=='4' && a[i+1]=='4' && a[i+2]=='4'){
    //         ctr++;
    //     }
    // }
    if(a.find("444")!=a.npos){
        ctr++;
    }
    if(count>0 || ctr>0 || a[0]!='1'){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

return 0;
}
