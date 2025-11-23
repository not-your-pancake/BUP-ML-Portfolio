#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void display(Node *head){
    while ( head != NULL ){
        cout << head-> data <<" ";
        head = head -> next;
    }
}

void insertAtBeginning(Node** head, int newValue){
    Node* newNode = new Node();
    newNode -> data = newValue;
    newNode -> next = *head;
    *head = newNode;
}

void insertAtEnd(Node** head, int newValue){
    
    Node* newNode = new Node();
    newNode -> data = newValue;
    newNode -> next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node *last = *head;

    while( last->next != NULL){
        last = last -> next;
    }
    last->next = newNode;
}

int main() {
    
    Node *n1, *n2, *n3;

    n1 = new Node();
    n2 = new Node();
    n3 = new Node();

    n1 -> data = 1;
    n2 -> data = 2;
    n3 -> data = 3;

    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = NULL;
    
    Node *head = n1;

    cout << "Initial List: ";
    display(head);
    
    cout << "\nAfter insertAtBeginning(5): ";    
    insertAtBeginning(&head , 5);
    display(head);
    
    cout << "\nAfter insertAtEnd(34): ";
    insertAtEnd(&head, 34);
    display(head);
    
    cout << "\n";
    
    return 0;
}