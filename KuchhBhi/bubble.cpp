#include<iostream>
using namespace std;

int main()
{
    int arr[] = {6,7,8,5,1};
    int n = 5;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]) {
                // int temp = arr[j];
                // arr[j]  = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    // for(int i=0; i<n-1; i++){
    //     for(int j=i; j<n; j++){
    //         if(arr[i]>arr[j]) {
    //             // int temp = arr[j];
    //             // arr[j]  = arr[j+1];
    //             // arr[j+1] = temp;
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }
    

    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}
