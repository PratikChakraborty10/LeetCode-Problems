#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left, *right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};
node* sortedtoBST(int arr[], int start, int end){
    if(start > end)
        return NULL;
    int mid = (start + end) / 2;
    node *root = new node(arr[mid]);
    root->left = sortedtoBST(arr, start, mid-1);
    root->right = sortedtoBST(arr, mid+1, end);
    return root;
}
void printPreorder(struct node*root){
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
int main(){
    int arr[] = {-10,-3,0,5,9};
    node * root = sortedtoBST(arr, 0, 4);
    printPreorder(root);
    return 0;
}
