#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inf("test.txt");
    char c;
    while (inf.get(c))
    {
        cout << c;
    }
    inf.close();

    return 0;
}