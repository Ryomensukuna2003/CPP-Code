#include <iostream>
#include <stdbool.h>
using namespace std;
llmain()
{
    // a is total number of classes
    // b is total number of classes attended
    // c is percentage
    lla, b;
    cin >> a >> b;
    bool medical_cause;
    cin >> medical_cause;
    llc = b * a / 100;

    if (c < 75)
    {
        cout << "medical cause" << endl;
        if (medical_cause == false)
        {
            cout << "you are not allowed to sit in exam" << endl;
        }
        else if (medical_cause = true)
        {
            cout << "good luck for your exam" << endl;
        }
    }
    else
    {
        cout << "good luck for your exam";
    }
    return 0;
}