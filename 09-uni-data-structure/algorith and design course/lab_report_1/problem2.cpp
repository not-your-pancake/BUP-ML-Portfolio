#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int val) {
    if (root == nullptr) return new Node(val);
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

Node* recursiveSearch(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (key < root->data)
        return recursiveSearch(root->left, key);

    return recursiveSearch(root->right, key);
}


Node* iterativeSearch(Node* root, int key) {
    Node* curr = root;
    while (curr != nullptr) {
        if (key == curr->data)
            return curr;
        else if (key < curr->data)
            curr = curr->left;
        else
            curr = curr->right;
    }
    return nullptr;
}

int main() {
    Node* root = nullptr;
    

    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int v : values) {
        root = insert(root, v);
    }

    int target = 40;

    // Testing Recursive Search
    cout << "Searching for " << target << " using Recursive Search..." << endl;
    Node* resultRec = recursiveSearch(root, target);
    if (resultRec) cout << "Found: " << resultRec->data << endl;
    else cout << "Not Found" << endl;

    // Testing Iterative Search
    cout << "\nSearching for " << target << " using Iterative Search..." << endl;
    Node* resultIter = iterativeSearch(root, target);
    if (resultIter) cout << "Found: " << resultIter->data << endl;
    else cout << "Not Found" << endl;

    return 0;
}