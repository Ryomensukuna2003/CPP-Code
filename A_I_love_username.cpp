#include<bits/stdc++.h>

using namespace std;


int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    int t;
    cin>>t;
    int max_till_now = t;
    int min_till_now = t;
    int count = 0;

    while(n--){
        cin>>t;
        if(t>max_till_now){
            count++;
            max_till_now = t;
        }

        if(t < min_till_now){
            count++;
            min_till_now = t;
        }
    }

    cout<<count<<'\n';
}
