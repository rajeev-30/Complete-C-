#include<iostream>
using namespace std;

class emp{
    int id;
    float salary;
    public:
    void input(){
        cout<<"\nEnter id: ";
        cin>>id;
        cout<<"\nEnter salary: ";
        cin>>salary;
    }

    void display(){
        cout<<"\n"<<id<<" "<<salary;
    }
};

int main(){
    int n;
    cout<<"\nEnter number of employee: ";
    cin>>n;
    emp *p= new emp[n];
    emp *d=p;
    emp *flag =p;
    if(p==NULL){
        cout<<"\nMemory allocation faliure";
        exit(1);
    }
    for(int i=0; i<n; i++){
        p->input();
        p++;
    }

    for(int i=0; i<n; i++){
        d->display();
        d++;
    }

    delete []flag;

    return 0;
}