#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

// Function to print the list
void display(Node *head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n\n";
}

int main(){
    
    // --- 1. SETUP INITIAL LIST (15 -> 25 -> 35 -> 45) ---
    Node *n1 = new Node(); n1->data = 15;
    Node *n2 = new Node(); n2->data = 25; n1->next = n2;
    Node *n3 = new Node(); n3->data = 35; n2->next = n3;
    Node *n4 = new Node(); n4->data = 45; n3->next = n4; n4->next = NULL;
    
    Node *head = n1;
    
    cout << "CURRENT LIST:\n";
    display(head);
    
    // --- 2. GET USER INPUT ---
    int newValue;
    cout << "Enter the value you want to add: ";
    cin >> newValue;
    
    int choice;
    cout << "Where do you want to add it?\n";
    cout << "1. At the Beginning (Start)\n";
    cout << "2. After a specific value (Middle/End)\n";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    // --- 3. CREATE THE NEW NODE ---
    // We create the node first, but we don't connect it yet
    Node *newNode = new Node();
    newNode->data = newValue;
    newNode->next = NULL;

    // --- 4. EXECUTE LOGIC BASED ON CHOICE ---
    
    if (choice == 1) {
        // === INSERT AT BEGINNING ===
        newNode->next = head; // Point new node to old head
        head = newNode;       // Update head pointer
        cout << "Inserted at the start!\n";
    } 
    else if (choice == 2) {
        // === INSERT AFTER SPECIFIC NODE ===
        int target;
        cout << "Enter the value you want to insert AFTER: ";
        cin >> target;
        
        Node *curr = head;
        // Search for the target
        while (curr != NULL && curr->data != target){
            curr = curr->next;
        }
        
        if (curr != NULL) {
            // Target found: Perform the "Bridge" logic
            newNode->next = curr->next;
            curr->next = newNode;
            cout << "Inserted after " << target << "!\n";
        } else {
            // Target not found
            cout << "Error: Value " << target << " not found in the list.\n";
            // Optional: delete newNode since we didn't use it to prevent memory leak
            delete newNode; 
        }
    } 
    else {
        cout << "Invalid choice!\n";
    }

    // --- 5. FINAL RESULT ---
    cout << "\nUPDATED LIST:\n";
    display(head);
    
    return 0;
}