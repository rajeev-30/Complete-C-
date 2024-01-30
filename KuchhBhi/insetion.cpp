#include<iostream>
using namespace std;

int main(){
    int arr[] = {8,5,7,3,2};
    int n = 5;
    
    for(int i=1; i<n; i++){
        int j = i-1;
        int x = arr[i];

        while(j>-1 && arr[j]>x){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }

    for(auto i: arr)
        cout<<i<<" ";

    return 0;
}
