#include <bits/stdc++.h>
using namespace std;

llsum(llk)
{
  if (k > 0)
  {
    return k + sum(k - 1);
  }
  else
  {
    return 0;
  }
}

#define ll long long

llmain()
{
  llresult = sum(10);

  cout << result;
  return 0;
}