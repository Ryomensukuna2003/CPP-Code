#include <bits/stdc++.h>
using namespace std;

llmain()
{
    llnum, first, second, next;
    cin >> num;
    first = 0;
    second = 1;

    for (lli = 0; i <= num; i++)
    {
        cout << first << endl;
        next = first + second;
        first = second;
        second = next;
    }
}