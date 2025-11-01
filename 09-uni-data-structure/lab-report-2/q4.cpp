#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main() {
    
    //4. Write a program to count how many times a particular value appears in a linked list.
    
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
    int value_to_count = 22;
    int count = 0;
    while (head != NULL){
        if (head-> data == value_to_count){
            count ++;
        }
        head = head->next;
    }
    
    cout << " the value " << value_to_count << " repeats :" << count << " times \n";
    return 0;	
}
