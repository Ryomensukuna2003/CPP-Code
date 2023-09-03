#include <bits/stdc++.h>
using namespace std;

class Supercar{
private:
    int Top_Speed;
    bool SUV;

public:
    int Price;
    int Speed;
    string color;

    void print(){
        cout<<"Price "<<this->Price<<endl;
        cout<<"Speed "<<this->Speed<<endl;
    }

    int gettopspeed(){
        return Top_Speed;
    }
    bool getSUV(){
        return SUV;
    }
    void settopspeed(int n){
        Top_Speed=n;
    }
    void setSUV(bool s){
        SUV=s;
    }
};

int main(){
    Supercar Maclaren;

    Maclaren.Price=99999;
    Maclaren.Speed=438;
    Maclaren.settopspeed(101010101);
    // cout<<Maclaren.gettopspeed();
    Maclaren.print();
    
    Supercar Porshe(Maclaren);
    Porshe.print();
} 