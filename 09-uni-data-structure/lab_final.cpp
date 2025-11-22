#include <iostream>
using namespace std;


int main(){

/// array traversal
int arr[10] = {1,2,3,4,5};

// cout << "using for loop: "<< endl;
//
//    for ( int i=0; i<5; i++){
//        cout << arr[i]<< " ";
//    }
//     cout << endl;
//
// cout << "using while loop: "<< endl;
//    int j = 0;
//    while (j<5){
//        cout << arr[j]<< " ";
//        j++;
//    }
//    cout << endl;
//
// cout << "using do while loop: "<< endl;
//
//    int k = 0;
//    do{
//        cout << arr[k]<< " ";
//        k++;
//    }while (k<5);

/// insertion from the start
//cout << "insertion from the start \n" ;
//
//int n = 5;
// cout << "using before: "<< endl;
//
//    for ( int i=0; i<n; i++){
//        cout << arr[i]<< " ";
//    }
//     cout << endl;
//
//int newEle = 25;
//
//for( int i = n-1; i>=0; i--){
//    arr[i+1] = arr[i];
//}
//cout << endl;
//
//arr[0] = newEle;
//n++;
// cout << "after insertion form the front: "<< endl;
//
//    for ( int i=0; i<n; i++){
//        cout << arr[i]<< " ";
//    }
//cout << endl;

/// insertion from the end
//cout << "insertion from the end \n\n" ;
//int n = 5;
//
//cout << "before: "<< endl;
//    for ( int i=0; i<n; i++){
//        cout << arr[i]<< " ";
//    }
//cout << endl;
//arr[n] = 25;
//n++;
//cout << "after: "<< endl;
//    for ( int i=0; i<n; i++){
//        cout << arr[i]<< " ";
//    }
//cout << endl;

/// insertion from anywhere
int loc, newele,n=5;

cout << "set location: ";
cin >> loc;

cout << "set new element : ";
cin >>  newele;

int index = loc-1;

cout << "before: "<< endl;
    for ( int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }
cout << endl;

// shifting the position
for( int i = index ; i >= 0; i--){
    arr [i+1] = arr[i];
}

arr[index] = newele;
n++;

cout << "after: "<< endl;
    for ( int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }
cout << endl;


return 0;
}
