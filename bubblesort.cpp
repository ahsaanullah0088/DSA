#include<iostream>
using namespace std;
int main(){
    // bubble sort
    int arr[] = {5,4,3,2,1};
     int counter = 1;
    while(counter<5){
        for(int i=0; i<5-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
}
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}