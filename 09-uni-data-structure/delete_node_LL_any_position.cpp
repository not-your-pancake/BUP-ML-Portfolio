#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main() {
    
    //given a sorted linked list, insert a new node in ascending order.
    
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
    
    int newValue;
    cin >> newValue;
    Node* newNode = new Node();
    newNode -> data = newValue;
    newNode -> next = NULL;

    if (head == NULL || head->data > newValue) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != NULL && current->next->data < newValue) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
