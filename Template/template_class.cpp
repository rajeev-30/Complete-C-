#include<iostream>
using namespace std;
template<class T>

void display(T x)
{
    cout<<"Templates display: "<<x<<endl;
    }
    template<class T1, class T2, class T3>
    void display(T1 x, T2 y, T3 z){
    cout<<"Templates display: "<<x<<" "<<y<<" "<<z<<" "<<endl;
    }
    void display(int x){
    cout<<"Explicit display: "<<x<<endl;
}

int main(){

display(100);
display(56.78);
display('a');
display(5.98,'b',89);
return 0;
}