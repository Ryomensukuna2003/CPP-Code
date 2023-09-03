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
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    vector<int> vec1;
    int ctr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            ctr++;
        }
        else
        {
            vec1.push_back(ctr + 1);
            ctr = 0;
        }
    }
    // for(auto x:vec1){
    //     cout<<x<<" ";
    // }
    bool xy = false;
    for (int i = 0; i < vec1.size(); i++)
    {
        if (vec1[i] % 2 != 0)
        {
            xy = true;
        }
    }
    if (xy == true)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
