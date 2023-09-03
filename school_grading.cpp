/*a. Below 25 - F
  b. 25 to 45 - E
  c. 45 to 50 - D
  d. 50 to 60 - C
  e. 60 to 80 - B
  f. Above 80 - A*/
#include <iostream>
using namespace std;
llmain()
{
    lla;
    cin >> a;
    if (a < 25)
    {
        cout << "F";
    }
    else if (a >= 25 && a < 45)
    {
        cout << "E";
    }
    else if (a >= 45 && a < 50)
    {
        cout << "D";
    }
    else if (a >= 50 && a < 60)
    {
        cout << "D";
    }
    else if (a >= 60 && a < 80)
    {
        cout << "C";
    }
    else if (a >= 80 && a < 90)
    {
        cout << "B";
    }
    else
    {
        cout << "A";
    }
    return 0;
}