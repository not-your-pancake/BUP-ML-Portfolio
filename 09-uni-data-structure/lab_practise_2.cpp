#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct Student {
    int id;
    string name;
    float marks;
};

struct Book {
    string title;
    string author;
    float price;
};

struct Rectangle {
    float length;
    float width;
};

int main (){

    // 5. Define a struct node with data and a next pointer. 
    // Dynamically allocate memory for one
    // node, assign data, and print it. (Pointer)
    // Node *head, *middle, *last;
    
    Node *head, *middle, *last;

    head = new Node();
    middle = new Node();
    last = new Node();
    
    head -> data = 10;
    middle -> data = 20;
    last -> data = 30;

    head -> next = middle;
    middle -> next = last;
    last -> next = nullptr;

    while (head != nullptr) {
        cout << head -> data << " ";
        head = head -> next;
    }

    cout << "\n";
    // 1. Write a program to declare a structure Student with 
    // members: id, name, and marks. Take
    // input for 5 students and display them in a formatted way. (Structure)

    Student students[2];
    for (int i = 0; i < 2; i++) {
        cout << "Enter details for student " << (i + 1) << ":\n";
        cout << "ID: ";
        cin >> students[i].id;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Marks: ";
        cin >> students[i].marks;
    }
    cout << "\nStudent Details:\n";
    cout << "ID\tName\tMarks\n";
    for (int i = 0; i < 2; i++) {
        cout << students[i].id << "\t" << students[i].name << "\t" << students[i].marks << "\n";
    }

    // 2. Declare an integer, a float. Create pointers for each type and display: 
    // The address of each variable using & and The value using pointer 
    // dereferencing *. (Pointer)

    int intVar = 42;
    float floatVar = 3.14f;
    int* intPtr = &intVar;
    float* floatPtr = &floatVar;
    cout << "\nInteger variable address: " << &intVar << ", value: " << *intPtr << "\n";
    cout << "Float variable address: " << &floatVar << ", value: " << *floatPtr << "\n";
    
//  3.Declare an integer array of size 5. Take inputs to the array from the user. Use a pointer to
// traverse the array and print all elements. (Pointer)
    int arr[5];
    cout << "\nEnter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Array elements are:\n";
    int *arrPtr = arr;
    for (int i = 0; i < 5; i++) {
        cout << *(arrPtr + i) << " ";
    }

// 4. Define a structure Book with title, author, and price. 
// Use a pointer to access and print the
// structure members using the -> operator. (Structure)

    Book book;
    Book *bookPtr = &book;
    cout << "\nEnter book details:\n";
    cout << "Title: ";
    cin >> bookPtr->title;
    cout << "Author: ";
    cin >> bookPtr->author;
    cout << "Price: ";
    cin >> bookPtr->price;
    cout << "\nBook Details:\n";
    cout << "Title: " << bookPtr->title << "\t" << "Author: " << bookPtr->author << "\t" << "Price: " << bookPtr->price << "\n";
    
//     6. Define a structure Rectangle with members length and width. (Structure)
//   ■ Calculate the area and the perimeter of a rectangle.
//   ■ Pass the structure to a function to calculate and return the area and
//   perimeter.

    Rectangle rect;
    Rectangle *rectPtr = &rect;
    cout << "\nEnter rectangle length and width:\n";

    rectPtr -> length = 5.0;
    rectPtr -> width = 3.0;

    float area = rectPtr -> length * rectPtr -> width;
    float perimeter = 2 * (rectPtr -> length + rectPtr -> width);

    cout << "Area: " << area << "\n";
    cout << "Perimeter: " << perimeter << "\n";

    return 0;
}