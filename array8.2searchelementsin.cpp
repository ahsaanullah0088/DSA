#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

// int linearSearch(int arr[],int n, int key){
//     for(int i=0; i<n ; i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }
//     return -1;
// }
int main(){
    // binary search
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;


    // int n;
    // cout<<"Enter the size of the array: ";
    // cin>>n;
    // int array[n];
    // for(int i=0;i<n;i++){
    //     cin>>array[i];
    // }
    // int key;
    // cout<<"Enter the key: ";
    // cin>>key;
    // cout<<linearSearch(array,n,key)<<endl;

}
// Time complexity of binary search is O(logn) and linear search is O(n)