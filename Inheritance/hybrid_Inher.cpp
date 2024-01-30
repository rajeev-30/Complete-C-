// Hybrid Inheritance - combination of two Inheritance
#include<iostream>
using namespace std;

class A{
    public:
        int a;

        void getA(){
            cout<<a<<endl;
        }
};

class B{
    public:
        int b;

        void getB(){
            cout<<b<<endl;
        }
};

class C: public A{
    public:
        int c;

        void getC(){
            cout<<c<<endl;
        }
};

class D: public B, public C{

};


int main(){
    D d;
    

    d.a = 20;
    d.b = 50;
    
    d.getA();
    d.getB();
}