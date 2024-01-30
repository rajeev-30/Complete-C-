#include<iostream>
#include<stack>
using namespace std;


int main()
{
    /* code */
    stack<int> s;
    s.push(1);
    s.push(3);
    s.push(4);
    s.push(2);
    
    s.pop();
    // s.pop();


    cout<<s.top()<<endl;

    cout << "Empty or Not: " << s.empty() << endl;
    cout<<"Size: "<<s.size()<<endl;

    return 0;
}
