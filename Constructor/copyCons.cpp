#include<iostream>
using namespace std;

class Hero{
        
    public:
        int i;

        Hero(int i){
            this->i = i;
            cout<<this->i<<endl;
        }

        Hero(Hero &j){
            this->i = j.i;
            cout<<"Copy constructer called: "<<this->i<<endl;
        }
        
};

int main(){

    // Hero h(5);
    Hero *a = new Hero(6);
    Hero a1(61);

    // Hero h1(h);

}