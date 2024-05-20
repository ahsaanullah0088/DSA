#include<iostream>
#include<stack>
#include<cstring> // Include for strlen()

using namespace std;

class Stack {
private:
    char A[101];
    int top;
public:
    void Push(char x); // Changed int to char
    void Pop();
    char Top(); // Changed int to char
    bool IsEmpty();
};

void Reverse(char *C, int n) {
    stack<char> S;
    for(int i=0; i<n; i++){
        S.push(C[i]);
    }
    for(int i=0; i<n; i++){
        C[i] = S.top();
        S.pop();
    }
}

int main() {
    char C[51];
    cout<<"Enter a string: ";
    cin>>C;
    Reverse(C , strlen(C)); // Changed c to C, and strlen(C) instead of strlen(c)
    cout<<"Output: "<<C;
}
