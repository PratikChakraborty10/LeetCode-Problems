#include <bits/stdc++.h>
using namespace std;
struct node {
    char data;
    struct node* next;
};
bool isPalindromeUtil(struct node** left, struct node* right){
    if (right == NULL)
        return true;
    bool isp = isPalindromeUtil(left, right->next);
    if (isp == false)
        return false;
    bool isp1 = (right->data == (*left)->data);
    *left = (*left)->next;
    return isp1;
}
bool isPalindrome(struct node* head){
    isPalindromeUtil(&head, head);
}
void push(struct node** head_ref, char new_data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
int main(){
    struct node* head = NULL;
    char str[] = "abacaba";
    int i;
    for (i = 0; str[i] != '\0'; i++) 
        push(&head, str[i]);
    isPalindrome(head) ? cout << "True\n" : cout << "False\n";
    return 0;
}
