#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* top = NULL;
void push(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = top;
    top = temp;
}
void pop(){
    if(top == NULL){
        cout<<"Stack is empty"<<endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}
int main(){

    return 0;
}