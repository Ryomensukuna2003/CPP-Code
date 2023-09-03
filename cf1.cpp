#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
}
llmain()
{
    llt;
    cin >> t;
    llnum, ctr;
    ctr = 0;
    // testcase loop
    for (lli = 0; i < t; i++)
    {
        cin >> num;
        lla[num - 1];
        // value input loop
        for (lli = 0; i < num; i++)
        {
            cin >> a[i];
        }
        sort(a, a + num);
        for (llj = 0; j < num; j++)
        {
            if (a[i] < a[i + 1])
            {
                ctr++;
            }
        }
        if (sizeof(a) == 0)
        {
            cout << "YES" << endl;
        }
        else if (ctr == num)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
