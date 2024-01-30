#include<iostream>
using namespace std;
class Demo{
    public:
    int a,b;
    Demo(int a){
        this->a = a;
    }

    int operator++ (int b){
        return --b;
    }
};


int main(){
    // Demo a(10);
    // Demo b(20);
    // Demo c(0);
    int a = 5;
    a++;
    cout<<"rm"<<a<<endl;
}