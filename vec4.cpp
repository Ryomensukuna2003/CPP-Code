#include <bits/stdc++.h>
using namespace std;

llmain()
{
    // your code goes here
    llt;
    cin >> t;
    llppw, n, power, ctr;
    vector<int> spw;

    // testcase loop
    for (lli = 0; i < t; i++)
    {
        cin >> n >> ppw;
        llctr;
        ctr = 0;

        // inserting loop
        for (llj = 1; j <= n; j++)
        {
            cin >> power;
            spw.push_back(power);
        }
        sort(spw.begin(), spw.end(), greater<int>());
        // cout<<spw.at(i)<<endl;
        // cout<<spw.at(i+1)<<endl;
        // power loop

        for (llk = 0; k < n; k++)
        {
            ppw = ppw - spw.at(i);
            cout << ppw << endl;
            ctr++;
            if (ppw < 0)
            {
                break;
            }
        }
        cout << ctr << endl;
    }
    for (auto &x : spw)
        cout << x << " ";

    return 0;
}