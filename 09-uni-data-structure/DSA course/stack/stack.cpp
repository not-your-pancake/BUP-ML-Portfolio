#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node *top = NULL;

void display(Node *head){
    while ( head != NULL){
        cout << head->data << "\n";
        head = head->next;
    }
    cout << "\n\n";
}

void push (int val){

    if (top != NULL){
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;
        top = newNode;
        return;
    }
    else{
        cout << "overflow\n";
        return;
    }
}

void pop(){
if ( top != NULL){
    Node *temp = top;
    top = top->next;
    delete temp;
}
    else{
        cout << "underflow\n";
        return;
    }
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
    
    top = n1;
    
    // before 
    display(top);
    
    // push(123);
    
    // display(top);
    
    pop();
    
    display(top);
    
    
    return 0;
}