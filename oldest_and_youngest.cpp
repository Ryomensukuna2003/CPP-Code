#include <iostream>
using namespace std;
llmain()
{

    lla, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c && b > c)
    {
        cout << "a is oldest" << endl
             << "c is youngest";
    }
    else if (a > b && a > c && c > b)
    {
        cout << "a is oldest" << endl
             << "b is youngest";
    }
    else if (b > a && b > c && c > a)
    {
        cout << "b is oldest" << endl
             << "a is youngest";
    }
    else if (b > a && b > c && a > c)
    {
        cout << "b is oldest" << endl
             << "c is youngest";
    }
    else if (c > a && c > b && a > b)
    {
        cout << "c is oldest" << endl
             << "b is youngest";
    }
    else if (c > a && c > b && b > a)
    {
        cout << "c is oldest" << endl
             << "a is youngest";
    }

    return 0;
}