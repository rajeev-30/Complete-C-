// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class demo{
    public:
        int id;
        float s;
};

int main() {
    int n;
    cin>>n;
    
    demo *a = new demo[n];
    int id;
    float s;
    for(int i=0; i<n; i++){
        cin>>id>>s;
        a[i].id = id;
        a[i].s = s;
    }  
    int d;
    cin>>d;
    
    for(int i=0;i<n; i++){
        if(a[i].id==d){
            cout<<endl<<a[i].s<<endl;
            return 0;
        }
    }
    cout<<"Not found";
    return 0;
}