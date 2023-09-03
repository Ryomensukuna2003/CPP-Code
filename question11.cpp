#include <bits/stdc++.h>
using namespace std;

// Factorial of n = 1*2*3*...*n

llfactorial(lln)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

llmain()
{
    cout << factorial(10);
    return 0;
}