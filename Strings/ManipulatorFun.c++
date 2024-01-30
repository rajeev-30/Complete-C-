#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "hello";
    string s2 = "world";

    // s1.append(s2);
    // s1.insert(2,s2);
    // cout<<s1.size()<<endl;
    // cout<<s1.length()<<endl;
    // cout<<s1.empty()<<endl;
    // cout<<s1.compare(s2)<<endl;
    // cout<<s1.compare(2,2,s2,3,4)<<endl;
    cout<<s1.find("e")<<endl;
    cout<<s1.rfind("e")<<endl;
    cout<<s1.find_last_of("h")<<endl;

    // cout<<s1<<endl;


    return 0;
}
