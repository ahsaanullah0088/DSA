#include <iostream>
#include <climits>
using namespace std;
int main(){
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
int arr[4] = {1,2,3,4};
// for(int i=0;i<n;i++){
//     cin>>array[i];
// }
// for(int i=0;i<n;i++){
//     cout<<array[i]<<" ";
// }

for(int i=0;i<4;i++){
    maxNo = max(maxNo,arr[i]);
    minNo = min(minNo,arr[i]);
}
cout<<maxNo<<endl;
cout<<minNo<<endl;
}
