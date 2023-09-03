#include <bits/stdc++.h>
using namespace std;

#define ll long long
llmain()
{
    // fpr declaring vector
    vector<int> vec1;
    llsize, a;
    cin >> size;
    for (lli = 0; i < size; i++)
    {
        cin >> a;
        vec1.push_back(a);
    }
    vec1.push_back(10);
    // for printing
    for (auto &vec1 : vec1)
    {
        cout << vec1 << " ";
    }
    cout << endl;
    // for accesing elements
    cout << vec1.at(3);

    vec1.at(2) = 1000;

    cout << vec1;

    return 0;
}
