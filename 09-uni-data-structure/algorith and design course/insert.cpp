#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){ /// jokhn kono node ei chilo na.
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int key){
    if (root==NULL){
        return new Node(key);
    }

    if(key<root->data){
        root->left = insert(root->left, key);
    }
    else if(key > root->data){
        root->right = insert(root->right, key);
    }

    return root;
}

void inorder(Node *root){

    if(root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);

}

void preorder(Node *root){
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

/// fiding a data in BST

bool search(Node *root, int key){

    if(root==NULL)
        return false;

    if(root-> data == key)
        return true;

    if(key <root ->data)
        return search(root->left, key);

    if(key > root->data)
        return search(root->right, key);

}

/// find minimum element
int minimum(Node *root){

    if(root == NULL)
        return -1;
    while( root->left !=NULL){
     root = root->left;
    }

    return root->data;
}

/// find max element
int maximum(Node *root){

    if(root == NULL)
        return -1;
    while( root->right !=NULL){
     root = root->right;
    }

    return root->data;
}

/// find the height of the tree
int height(Node* root) {
    if (root == NULL)
        return -1;   // height of empty tree

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return 1 + max(leftHeight, rightHeight);
}


int main(){

    Node *root = NULL;
    int n,x;

    cout << "Enter number of nodes" << endl;
    cin >> n;

    cout << "Enter the nodes" << endl;

    for( int i =0; i<n; i++){
        cin >> x;
        root = insert(root,x);
    }


    cout << "\nafter in-order traversal :"<< endl;
    inorder(root);

    cout << "\nafter pre-order traversal :"<< endl;
    preorder(root);


    /// searching a key from BSAT
    cout << "\nSearching a data in BST:"<< endl;

    int p;

    cout << "\nInsert what you want to search: \n";
    cin >> p;

    if (search(root, p)){
        cout << "element found\n";
    }
    else{
        cout << "element not found\n";
    }

    /// finding minimum
    cout << "minimum element is "<< minimum(root) << endl;

    /// finding maximum
    cout << "maximum element is "<< maximum(root)<< endl;

    /// height of BST
    cout << "\nHeight of BST: " << height(root) << endl;

    return 0;
}
