#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int sumNodes(Node* head) {
    int sum = 0;
    Node* current = head;
    while (current != NULL) {
        sum += current->data;
        current = current->next;
    }
    return sum;
}

int main() {
    // create a simple linked list: 10 -> 20 -> 30
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};
    Node* n3 = new Node{30, nullptr};
    n1->next = n2;
    n2->next = n3;
    n3->next = nullptr;

    Node* head = n1;

    int nodeCount = countNodes (head);
    int nodeSum = sumNodes(head);
    cout << "Total number of nodes: " << nodeCount << "\n";
    cout << "Sum of all node data values: " << nodeSum << "\n";

    return 0;
}
