#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int search(int inorder[], int start, int end, int val) {
    for(int i = start; i <= end; i++) {
        if(inorder[i] == val) {
            return i;
        }
    }
    return -1;
}
Node* buildTree(int postorder[], int inorder[], int start, int end) {
    if(start > end) {
        return NULL;
    }
    static int idx = end;
    int val = postorder[idx];
    idx--;
    Node* curr = new Node(val);
    if(start == end) {
        return curr;
    }
    int pos = -1;
    for(int i = start; i <= end; i++) {
        if(inorder[i] == val) {
            pos = i;
            break;
        }
    }
    int pos = search(inorder, start, end, val);
    curr->right = buildTree(postorder, inorder, pos+1, end);
    curr->left = buildTree(postorder, inorder, start, pos-1);
    return curr;
}
void inorderPrint(Node* root) {
    if(root == NULL) {
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}
int main(){
    int postorder[] = {4, 5, 2, 6, 3, 1};
    int inorder[] = {4, 2, 5, 1, 3, 6};
    //build tree
    Node* root = buildTree(postorder, inorder, 0, 5);
    inorderPrint(root);
    return 0;
}