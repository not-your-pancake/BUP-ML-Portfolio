#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[100] = {10, 20, 30, 40, 50};
int n = 5; 
const int MAX_SIZE = 100; 

cout << "Insert Element at the End :\n";
cout << "Original array (Size: " << n << "): \n";
for( int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
cout << endl;

int newValue = 60; 
if (n < MAX_SIZE) {    
    arr[n] = newValue;
    n++; 
    cout << "The new array (Size: " << n << "): \n";
    for( int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
} else {
    cout << "\nError: Array overflow. Cannot insert new value.\n";
}
cout << endl;

return 0;
}
