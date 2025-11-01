#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* head = NULL;
    auto insertAtBeginning = [&](int data){
        Node* newNode = new Node();
        newNode -> data = data;
        newNode -> next = head;
        head = newNode;
    };
    // insert at end
    auto insertAtEnd = [&](int data){
        Node* newNode = new Node();
        newNode -> data = data;
        newNode -> next = NULL;
        if (head == NULL){
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNode;
    };

    // display
    auto display = [&](){
        Node* temp = head;
        while (temp != NULL){
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << "NULL\n";
    };
    
int main(){

//6. Write functions for insertAtBeginning(), insertAtEnd(), and display() for a singly linked
//list. Call them from main().
    // insert at beginning
    // insert at beginning


    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtEnd(30);
    insertAtEnd(40);
    display();

    return 0;
}