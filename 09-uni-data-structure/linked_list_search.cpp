#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main() {
    
    //4. search a particular value in a linked list.
    
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
    int find ;
    Node* location=NULL;
    cin >> find;
    
    while (head != NULL){
        if (head-> data == find){
            location = head;
            break;
        }
        head = head->next;
    }

    if (location != NULL) {
        cout << "Found at: " << location << "\n";
    } else {
        cout << "Not Found\n";
    }
    return 0;	
}
