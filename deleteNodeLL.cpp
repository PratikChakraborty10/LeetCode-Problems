#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node *next;
	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};
Node *takeinput() {
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1) {
		Node *newnode = new Node(data);
		if (head == NULL) {
			head = newnode;
			tail = newnode;
		} else {
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}
void print(Node *head) {
	Node *temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
Node *deleteNode(Node * head, int pos) {
    if(head == NULL) 
       return NULL; 
    if(pos == 0) 
    { 
        Node *res = head; 
        head=head->next;
        delete res; 
        return head;   
    } 
      
    head->next = deleteNode(head->next, pos-1); 
    return head; 
}
int main() {
    Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);
}