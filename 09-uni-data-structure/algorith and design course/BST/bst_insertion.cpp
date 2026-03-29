#include <iostream>
#include <vector>

using namespace std;

// Structure for a BST Node
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a value into the BST
Node* insert(Node* root, int val) {
    // If the tree is empty, return a new node
    if (root == nullptr) {
        return new Node(val);
    }

    // Otherwise, recur down the tree
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }

    // Return the (unchanged) node pointer
    return root;
}

// Inorder Traversal: Left -> Root -> Right
void inorder(Node* root) {
    if (root == nullptr) return;

    inorder(root->left);       // Visit Left
    cout << root->data << " "; // Visit Root
    inorder(root->right);      // Visit Right
}

int main() {
    Node* root = nullptr;
    int n, value;

    cout << "Enter the number of integers (N): ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "\nInorder Traversal (Sorted Elements):\n";
    inorder(root);
    cout << endl;

    return 0;
}
