#include <iostream>
using namespace std;
#define MAX 5

int queueArray[MAX]; // linear queue
int front = -1; // just allocating so that it does give garbage value
int rear = -1;

void enqueue(int data){
    if (rear == MAX -1) {
        cout << "Queue is full\n";
    }
    else if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        queueArray[rear] = data;
        cout << data << " Inserted.\n";
    }
    else {
        rear++;
        queueArray[rear] = data;
        cout << data << " Inserted.\n";
    }
}

void dequeue(){
    // show under flow
    if (front == -1 && rear == -1) {
        cout << "Queue is empty\n";
    }
    else if (front == rear) {
        front = rear = -1;
    }
    else {
        cout << queueArray[front] << " Deleted.\n";
        front++;
    }
}
void display(){
    for (int i = front; i <= rear; i++) {
        cout << queueArray[i] << " ";
    }
}

int main(){
    // First in first out
    enqueue(10);
    enqueue(20);
    enqueue(30);
    
    display();
    cout << "\n";
    
    // dequeue();
    // cout << "\n";
    
    // display();

    return 0;
}