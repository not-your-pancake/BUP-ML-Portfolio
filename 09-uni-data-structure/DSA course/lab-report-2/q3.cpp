#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
int main (){
    // 3. Write a program to traverse the linked list and find the maximum value node.
    Node *node1, *node2, *node3;
    node1 = new Node();
    node2 = new Node();
    node3 = new Node();

    Node* head = node1;

    node1 -> data = 21;
    node1 -> next = node2; // link node1 to node2's adress

    node2 -> data = 42;
    node2 -> next = node3; // link node2 to node3's adress

    cout << "Node 1 data: " << node1 << "\n";
    cout << "Node 2 data: " << head << "\n";

    node3 -> data = 15;
    node3 -> next = nullptr; // last node points to null

     while (head != nullptr) {
        cout << "Data: " << head -> data << "\n";
        cout << "Node Address: " << head << "\n";
        cout << "Next Node Address: " << head -> next << "\n\n";
        head = head -> next;
    }

    int max = head -> data;
    while (head != nullptr) {
        if (head -> data > max){
            max = head -> data;
        }
        head = head -> next;
    }
    cout << "Maximum value in the linked list is: " << max << "\n";


   return 0;
}