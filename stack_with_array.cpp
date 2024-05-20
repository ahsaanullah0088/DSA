#include<iostream>
#include<stdio.h>
using namespace std;
#define MAX 1000
int A [MAX];
int top = -1;
void push(int x){
    if(top == MAX-1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    A[++top] = x;
}
void pop(){
    if(top == -1){
        cout<<"No element to pop"<<endl;
        return;
    }
    top--;
}
void print(){
    for(int i = 0; i<=top; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void topElement(){
    cout<<A[top]<<endl;
}
int main(){
    push(2);print();
    push(4);print();
    push(5);print();
    push(6);print();
    pop();print();
    topElement();print();
    return 0;

}
