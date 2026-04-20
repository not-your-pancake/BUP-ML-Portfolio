#include <iostream>
using  namespace std;

struct Node {
    int data;
    Node* next;
};

int main(){

    Node *node1, *node2, *node3;
    node1 = new Node();
    node2 = new Node();
    node3 = new Node();

    Node* head = node1;
    cout << "Address of head (node1): " << head << "\n";
    cout << "Adress of head->data: "<< head->data << "\n";

    cout << "Adress of node1: " <<node1 << "\n"; // address of node1
    node1 -> data = 21;
    node1 -> next = node2; // link node1 to node2's adress
    
    cout <<"adress of node2 : " <<node2 << "\n"; // address of node2
    node2 -> data = 22;
    node2 -> next = node3; // link node2 to node3's adress
    
    cout << "Adres of node3: "<<node3 << "\n"; // address of node3
    node3 -> data = 23;
    node3 -> next = nullptr; // last node points to null

    // traversing the linked list
    while (head != nullptr) {
        cout << head -> data << " ";
        head = head -> next;
    }

    return 0;
}