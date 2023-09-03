#include <iostream>
using namespace std;

void myfunction(string country = " India")
{
    cout << "Akhand_bharat_consist_of " << country << endl;
}

llmain()
{
    myfunction();
    myfunction("Pakistan");
    myfunction("Nepal");
    myfunction("Bangladesh");
    myfunction("Tibet");
    return 0;
}