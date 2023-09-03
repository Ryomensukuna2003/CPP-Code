#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007

int main(){
    int n;cin>>n;
    int temp;
    vector <int> vec1;

    if(n>=0){
        cout<<n;
        return 0;
    }
    else{
        if(n>-10){
            cout<<"0";
        }
        else{
            n=n*-1;
            for(int i=0;i<mod;i++){
                temp=n%10;
                
                vec1.push_back(temp);
                n=n/10;
                if(n<1){
                    break;
                }
            }
        }
    }
    if(vec1[0]>vec1[1]){
        vec1.erase(vec1.begin());
    }
    else{
        vec1.erase(vec1.begin()+1);
    }

    // int maxi=max_element(vec1.begin(),vec1.end())-vec1.begin();
    // vec1.erase(vec1.begin()+maxi);
    reverse(vec1.begin(),vec1.end());
    cout<<vec1[0]*-1;
    for (int i = 1; i < vec1.size(); i++){
        cout << vec1[i];
    }
       
}
