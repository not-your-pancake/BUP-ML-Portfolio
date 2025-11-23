#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

void display(Node *head){
    while ( head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n\n";
}

int main(){
    
    Node *n1, *n2, *n3, *n4;
    
    n1 = new Node();
    n2 = new Node();
    n3 = new Node();
    n4 = new Node();
    
    n1-> data = 15;
    n1-> next = n2;
    
    n2-> data = 25;
    n2-> next = n3;
    
    n3-> data = 35;
    n3-> next = n4;
    
    n4-> data = 45;
    n4-> next = NULL;
    
    Node *head;
    head = n1;
    
    Node *curr;
    curr = head;
    
    Node *prev;
    prev = NULL;
    
    // before any change
    
    display(head);
    
    // // val to delete 
    
    // int val_to_delete = 15;
    
    // if(curr != NULL && curr->data == val_to_delete){
    //     head = head->next;
    //     delete curr;
    // }
    
    // // after deletion from n1
    // display(head);
    
    /// deleteing at any point
    int val_to_delete = 35;
    
    while(curr != NULL && curr->data != val_to_delete){
        prev = curr;
        curr = curr->next;
    }
    
    if( curr != NULL){
        prev->next = curr->next;
        delete curr;
    }
    
    // delete at any position
    display(head);
    
    return 0;
}