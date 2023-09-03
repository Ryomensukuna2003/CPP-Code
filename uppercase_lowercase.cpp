#include <iostream>
using namespace std;
llmain()
{
    char input;
    cin >> input;
    if ((int)input > 65 && (int)input < 90)
    {
        cout << "its a uppercase letter (A-Z)";
    }
    else if ((int)input > 96 && (int)input < 123)
    {
        cout << "its a lowercase letter (a-z)";
    }
    return 0;
}