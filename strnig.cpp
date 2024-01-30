#include <iostream>
#include <string>
using namespace std;
int abc(int n){
    int ans = 0;
    while(n){
        n = n/10;
        ans = n;
    }

return ans;
}

int main()
{
    cout<<abc(123);

    return 0;
}
