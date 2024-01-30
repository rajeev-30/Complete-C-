#include<iostream>
using namespace std;

class A{
    int a;
    public:
        int b;

        void get(){
            a = 5;
            b = 10;
            cout<<a<<" "<<b<<endl;
        }
};

class B: public A{

};


int main(){
    B b;
    A a;

    a.b = 20;
    b.get();
}