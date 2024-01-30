#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //Write
    ofstream fout;
    fout.open("test.txt");
    fout<<"India";
    fout.close();


    //Read
    ifstream inf("test.txt");
    char c;
    while (inf.get(c))
    {
        cout << c;
    }
    inf.close();

    return 0;
}