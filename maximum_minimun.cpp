#include <bits/stdc++.h>
using namespace std;

void greatest(lla, llb, llc)
{
    if (a >= b && a >= c)
        cout << "Largest number: " << a << endl;

    if (b >= a && b >= c)
        cout << "Largest number: " << b << endl;

    if (c >= a && c >= b)
        cout << "Largest number: " << c << endl;
}
void smallest(lla, llb, llc)
{
    if (a <= b && a <= c)
        cout << "smallest number: " << a << endl;

    if (b <= a && b <= c)
        cout << "smallest number: " << b << endl;

    if (c <= a && c <= b)
        cout << "smallest number: " << c << endl;
}
llmain()
{
    greatest(23, 45, 456);
    smallest(23, 45, 456);
    return 0;
}