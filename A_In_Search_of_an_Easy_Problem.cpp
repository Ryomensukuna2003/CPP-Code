#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,ctr=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            ctr++;
            break;
        }
    }
    if(ctr>0){
        cout<<"HARD"<<endl;
    }
    else if(ctr==0){
        cout<<"EASY"<<endl;
    }
}
int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
