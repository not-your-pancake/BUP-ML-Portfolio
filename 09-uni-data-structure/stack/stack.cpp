#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// 1. Display function should print from the current 'top' of the stack.
void display(Node* top) {
    Node* current = top; // Start from the top
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
}

// 2. The 'push' function now accepts 'top' by reference (Node*& top).
// This allows the function to change the actual 'top' pointer in 'main'.
void push(Node*& top, int newVal) {
    // Create the new node and check for memory allocation failure
    Node* newNode = new (std::nothrow) Node(); 
    
    if (newNode == nullptr) {
        cout << "Error: Memory allocation failed. Cannot push " << newVal << ".\n";
        return;
    }
    
    // Set the new node's data
    newNode->data = newVal;
    
    // Link the new node to the current top of the stack
    newNode->next = top;
    
    // Update the 'top' pointer to the new node
    top = newNode;

    cout << "Item " << newVal << " pushed.\n";
}

int main() {
    // We only need the 'top' pointer for stack operations.
    // Initialize the stack as empty, or use the existing list setup.
    
    // --- Initial Linked List Setup (The starting 'stack') ---
    Node* n5 = new Node{5, nullptr};
    Node* n4 = new Node{4, n5};
    Node* n3 = new Node{3, n4};
    Node* n2 = new Node{2, n3};
    Node* n1 = new Node{1, n2}; // n1 is the initial TOP of the stack
    
    Node* top = n1; // The stack starts with '1' as the top element
    
    cout << "Initial Stack (Top to Bottom): ";
    display(top); // Display from 'top' (n1)

    cout << "\n";
    cout << " The address of top before push : " << top << "\n";
    
    // --- PUSH OPERATION ---
    push(top, 25); // Pass the 'top' pointer by reference
    
    cout << " The address of top after push : " << top << endl;

    cout << "\nStack after push(25): ";
    // The new 'top' will be the node containing 25
    display(top); 
    // Output: 25 1 2 3 4 5 

    // Note: You should generally use a Stack class to manage the 'top' pointer
    // inside the class, which avoids passing the pointer around.

    return 0;
}