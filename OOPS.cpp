#include <bits/stdc++.h>
using namespace std;

class Hero{

private:
    string name;
    int health;
    char level;
public:
// Constructor
    Hero(){
        cout<<"Constructor Called"<<endl;
    }
// Parameterised Constructor
    Hero(string name,int health,char level){
        this->name=name;
        this->health=health;
        this->level=level;
    }

// Getter
    void printname(){
        cout<<"Name: "<<name<<endl;
    }
    void printhealth(){
        cout<<"Health: "<<health<<endl;
    }
    void printlevel(){
        cout<<"Level: "<<level<<endl;
    }

// Setter
    void setname(string s,int pass){
        if(pass==120){
            name=s;
        }
        else cout<<"Wrong Pass of Name"<<endl;
    }
    void sethealth(int x,int pass){
        if(pass==120){
            health=x;
        }
        else cout<<"Wrong Pass of Health"<<endl;
    }
    void setlevel(char c,int pass){
        if(pass==120){
            level=c;
        }
        else cout<<"Wrong Pass of Level"<<endl;
    }

};

int main(){
    Hero h1("Shivanshu",1500,'B'); // Parameterised Constructor
    // h1.setname("Shivanshu",120);
    // h1.sethealth(INT_MAX,12);
    // h1.setlevel('Z',120);
    h1.printname();
    h1.printhealth();
    h1.printlevel();
    cout<<"Size: "<<sizeof(h1); // Size is 40 because of internal padding and data alginment
}
