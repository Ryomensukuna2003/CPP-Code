#include <iostream>
#include <sstream>
using namespace std;

class student
{
public:
    llage;
    llstandard;
    string first_name;
    string last_name;
};

llmain()
{
    llage, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    student student1;
    student1.age = age;
    student1.standard = standard;
    student1.first_name = first_name;
    student1.last_name = last_name;

    cout << student1.age << "\n";
    cout << student1.last_name << ", " << student1.first_name << "\n";
    cout << student1.standard << "\n";
    cout << "\n";
    // 15,john,carmack,10
    cout << student1.age << ", " << student1.first_name << ", " << student1.last_name << ", " << student1.standard;

    return 0;
}