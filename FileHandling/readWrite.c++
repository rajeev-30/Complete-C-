#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //write
    ofstream of("test.txt");
    of<<"New file createdd";
    of.close();

    // read
    ifstream inf("test.txt");
    char c;
    while (inf.get(c))
    {
        cout << c;
    }
    inf.close();

    return 0;
}