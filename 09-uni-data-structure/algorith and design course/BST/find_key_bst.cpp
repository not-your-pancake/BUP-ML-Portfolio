#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to search for a key in the BST
bool search(Node* root, int key) {
    // Base Case: Key not found or Key is at the current node
    if (root == nullptr) return false;
    if (root->data == key) return true;

    // Key is greater than root's data, search right
    if (key > root->data) {
        return search(root->right, key);
    }

    // Key is smaller than root's data, search left
    return search(root->left, key);
}

bool searchIterative(Node* root, int key) {
    while (root != nullptr) {
        if (key == root->data) {
            return true; // Found it!
        } else if (key < root->data) {
            root = root->left; // Move left
        } else {
            root = root->right; // Move right
        }
    }
    return false; // Key not found
}
int main() {
    // 1. Manually create a small BST for testing
    //        50
    //       /  \
    //      30   70
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);

    int target = 30;

    // 2. Call your search function
    if (search(root, target)) {
        std::cout << "Key " << target << " found in the BST!" << std::endl;
    } else {
        std::cout << "Key " << target << " not found." << std::endl;
    }

    return 0;
}
