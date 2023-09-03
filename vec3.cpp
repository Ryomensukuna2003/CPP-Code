#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

llmain()
{
    // vector size
    llsize;
    lla;
    vector<int> vec1;
    for (lli = 0; i < size; i++)
    {
        cin >> a;
        vec1.push_back(a);
    }
    // query size
    llq_size;
    cin >> q_size;
    llq;
    vector<int> query;
    for (lli = 0; i < q_size; i++)
    {
        cin >> q;
        query.push_back(q);
    }
    // main functions
    sort(vec1.begin(), vec1.end());
    for (lli = 0; i < q_size; i++)
    {
        if ((count(vec1.begin(), vec1.end(), query.at(i))) == query.at(i))
        {
            cout << "Yes";
            auto it1 = lower_bound(vec1.begin(), vec1.end(), query.at(i));
        }
        else
        {
            cout << "No";
            auto it2 = upper_bound(vec1.begin(), vec1.end(), query.at(i));
        }
    }
    return 0;
}
