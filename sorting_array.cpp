#include<iostream>
using namespace std;
int main(){
    // selection sort 
    int arr[] = {5,4,3,2,1};
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<"Sorted array is: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}