//A parent class can have more than one child class
#include<iostream>
using namespace std;

class A{
    public:
        int a;

        void getA(){
            cout<<a<<endl;
        }   
};

class B: public A{
    public:
        int b;

        void getB(){
            cout<<b<<endl;
        }
};
class C: public A{
    
};


int main(){
    C c;
    B b;

    b.a = 10;
    c.a = 20;
    b.getA();
    c.getA();
}