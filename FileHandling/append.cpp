#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char s[30];
    ofstream fileout;
    ifstream filein;

    fileout.open("test", ios::app);
    fileout << " Hello world";
    fileout.close();

    filein.open("test", ios::in);
    filein.getline(s, 30);
    cout << s;

    return 0;
}
