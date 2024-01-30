#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    /* code */
    int num;
    cout << "Enter a number in octal form: ";
    cin>>setbase(8)>>num;

    cout<<"value of number in decimal form: "<<setbase(10)<<num<<endl;
    cout<<"value of number in octal form: "<<setbase(8)<<num<<endl;
    cout<<"value of number in hexadecimal form: "<<setbase(16)<<num<<endl;

    return 0;
}
