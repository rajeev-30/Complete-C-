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
class C: public B{
    
};


int main(){
    C c;
    

    c.a = 20;
    c.b = 50;
    
    c.getA();
    c.getB();
}