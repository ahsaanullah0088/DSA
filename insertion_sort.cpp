#include<iostream>
using namespace std;
int main(){
    // insertion sort 
    int arr[] = {5,4,3,2,1};
    for(int i=0; i<5; i++){
        int current = arr[i];
        int j = i=1;
        while(arr[j]<current && j>=0){
            arr[j-1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    cout<<"Sorted array is: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}