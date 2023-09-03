#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

llmain()
{
    /* Enter your code here. Read input from STDIN. Prlloutput to STDOUT */
    llsize;
    cin >> size;
    lla;
    vector<int> vec1;
    for (lli = 0; i < size; i++)
    {
        cin >> a;
        vec1.push_back(a);
    }
    // question elements
    llq1, q2, q3;
    cin >> q1;
    cin >> q2 >> q3;
    vec1.erase(vec1.begin() + (q1 - 1));
    vec1.erase(vec1.begin() + (q2 - 1), vec1.begin() + (q3 - 1));
    cout << vec1.size() << endl;
    for (auto &vec1 : vec1)
    {
        cout << vec1 << " ";
    }
    return 0;
}
