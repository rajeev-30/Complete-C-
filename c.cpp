// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Counter{
    int c;
    public:
        Counter(int a){
            c = a;
        }
        
        Counter(Counter &ob){
            cout<<"Constructor Called"<<endl;
            c = ob.c;
        }
};

int main() {
    // Write C++ code here
    Counter r(10);
    Counter r2(r);
    

    return 0;
}