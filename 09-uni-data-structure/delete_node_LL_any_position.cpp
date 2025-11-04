
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void display(Node*  head){
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
int main() {
    
    //deletes a node from any position in a linked list.
    
    Node *n1, *n2, *n3;
    
    n1 = new Node();
    n2 = new Node();
    n3 = new Node();
    
    n1 -> data = 20;
    n1 -> next = n2;
    
    n2 -> data = 25;
    n2 -> next = n3;
    
    n3 -> data = 30;
    n3 -> next = NULL;
    
    Node *head;
    head = n1;
    int position;
    cin >> position;
    if (position == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } else {
        Node* current = head;
        for (int i = 0; current != NULL && i < position - 1; i++) {
            current = current->next;
        }
        if (current == NULL || current->next == NULL) {
            cout << "Position out of bounds" << endl;
        } else {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        }
    }    
    
    display(head);
    cout << endl;

    return 0;
}
