#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int sum (Node* head){
    Node* current = head;
    int sum = 0;
    
    while (current != NULL){
        sum = sum + current -> data;
        current = current -> next;
    }
    
    return sum;
}

int node_number(Node* head){
    Node* current = head;
    int count = 0;
    
    while (current != NULL){
        count++;
        current = current ->next;
    }
    
    return count;
}

int main() {
    
//5. Create a linked list of integers. Write separate functions to: Count the total number of
//nodes. Calculate the sum of all node data values. Display both results.
    
    Node *n1, *n2, *n3;
    
    n1 = new Node();
    n2 = new Node();
    n3 = new Node();
    
    n1 -> data = 21;
    n1 -> next = n2;
    
    n2 -> data = 22;
    n2 -> next = n3;
    
    n3 -> data = 23;
    n3 -> next = NULL;
    
    Node *head;
    head = n1;
    
    // see how many times a node value is present 
    
    
    cout << "Total node nodes are : " << node_number(head);
    cout << "\n";
    cout << "Total sum of all the nodes are : " << sum(head);
    
    return 0;	
}
