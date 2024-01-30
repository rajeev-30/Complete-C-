#include <iostream>
using namespace std;
// write program for destructor?
class MyClass1
{
public:
    MyClass1()
    {
        cout<<"Constructor of MyClass1"<<endl;
    }
    ~MyClass1()
    {
        cout<<"Destructor of MyClass1"<<endl;
    }
};

class MyClass2: public MyClass1
{
public:
    MyClass2()
    {
        cout<<"Constructor of MyClass2"<<endl;
    }
    ~MyClass2()
    {
        cout<<"Destructor of MyClass2"<<endl;
    }
};

int main(){
    MyClass1 m1;
    MyClass2 m2;
    return 0;
}