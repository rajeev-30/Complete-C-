#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    /* code */
    int age=22, rn=910;

    cout<<setfill('*');
    cout<<setw(2)<<"Age"<<setw(8)<<age<<endl;
    cout<<setw(2)<<"Roll No."<<setw(6)<<rn<<endl;

    return 0;
}
