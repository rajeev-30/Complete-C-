// Hybrid Inheritance - combination of two Inheritance
#include<iostream>
using namespace std;

class A{
    public:
        void fun(){
            cout<<"I am A"<<endl;
        }
};

class B{
    public:
        void fun(){
            cout<<"I am B"<<endl;
        }
};

class C: public A, public B{
    public:
        int c;

        void getC(){
            cout<<c<<endl;
        }
};



int main(){
    C c;
    c.B::fun();
    
}