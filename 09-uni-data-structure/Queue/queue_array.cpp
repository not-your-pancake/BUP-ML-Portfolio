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

Node *front = NULL;
Node *rear = NULL;

void enq(int val){
    Node *newNode = new Node();
    newNode->data = val;
    newNode -> next = NULL;
    rear->next = newNode;
}

void deq(){
    Node *temp;
    temp= front;
    front = front->next;
    delete temp;
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
    
    
    Node *head = n1;
    
    front = n1;
    rear = n4;
    
    // before 
    display(front);
    
    // enq(123);
    // //after
    // display(head);
    
    deq();
    display(front);
    
    return 0;
}