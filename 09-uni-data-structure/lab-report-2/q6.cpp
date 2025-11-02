#include <bits/stdc++.h>
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

void insert_at_start(Node** head, int newValue){
    // intialize Node
    
    Node* newNode = new Node();
    newNode -> data = newValue;
    newNode -> next = *head;
    *head = newNode;
}

void insert_last(Node** head, int newValue){
    
    Node* newNode = new Node();
    newNode -> data = newValue;
    newNode -> next = NULL;
    
    Node *last = *head;
    
    while( last != NULL){
        last = last -> next;
    }
    
    last->next = newNode;
}

int main() {
    
    Node *n1, *n2, *n3;
    
    // n1 = new Node(1,NULL);
    // n2 = new Node(2,NULL);
    // n3 = new Node(3,NULL);
    
    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = NULL;
    
    Node *head = n1;
    
    cout << "-- display the nodes values -- \n";
    display(head);
    
    cout << "\n";   
    
    cout << "-- added in the front --\n";
    insert_at_start(&head , 5);
    display(head);
    
    cout << " -- added at last -- \n";
    insert_last(&head, 34);
    display(head);
    
    return 0;
}
