#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    llalice = 0, bob = 0;
    llarr1[3];
    llarr2[3];
    for (lli = 0; i < 3; i++)
    {
        cin >> arr1[i];
    }
    for (lli = 0; i < 3; i++)
    {
        cin >> arr2[i];
    }
    // for(lli=0;i<3;i++)
    // cout<<arr1[i]<<' ';
    // main
    for (lli = 0; i < 3; i++)
    {
        // cout<<arr1[i]<<' '<<arr2[i]<<endl;
        if (arr1[i] > arr2[i])
        {
            alice++;
            // cout<<"alice"<<' '<<i<<endl;
        }
        else if (arr1[i] < arr2[i])
        {
            bob++;
            //  cout<<"bob"<<' '<<i<<endl;
        }
        // else if(arr1[i]==arr2[i]){
        //     continue;
        // }
    }
    // cout<<endl;
    cout << alice << " " << bob;
}
llmain()
{

    solve();

    return 0;
}
