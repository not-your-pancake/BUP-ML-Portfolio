#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void display(Node* head){
    while ( head != NULL){
        cout << head-> data << " ";
        head = head -> next;
    }
}

void push( int newVal){
    Node* newNode = new Node();
    Node* top = NULL;
    newNode -> data = newVal;
    newNode -> next = top;
    top = newNode;

}

int main (){
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();
    Node* n4 = new Node();
    Node* n5 = new Node();

    Node* head = n1;
    Node* top = head;
    
    // 1-> 2-> 3-> 4-> 5-> NULL
    n1 -> data = 1;
    n1 -> next = n2;

    n2 -> data = 2;
    n2 -> next = n3;

    n3 -> data = 3;
    n3 -> next = n4;

    n4 -> data = 4;
    n4 -> next = n5;

    n5 -> data = 5;
    n5 -> next = NULL;

    display(head);

    cout << "\n";
    cout << " The address of top : " << top << "\n";
    cout << " the address of head : " << head << endl;

    push(25);
    cout << "\n";
    display(head);

return 0;
}
