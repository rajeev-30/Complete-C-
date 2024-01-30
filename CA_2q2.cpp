#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n=6;
    int arr[] = {8,5,3,31,6,2};
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    double sum = 0;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        sum+=arr[i]*arr[i];
    }
    cout<<"sum: "<<sum<<endl;
    double avg = sum/n;
    
    cout<<"avg: "<<fixed<<setprecision(2)<<avg<<endl;
    cout<<"avg: "<<avg<<fixed<<setprecision(2)<<endl;
}