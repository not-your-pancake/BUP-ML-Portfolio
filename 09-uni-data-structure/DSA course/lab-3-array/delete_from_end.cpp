#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[100] = {10,20,30,40,50};
int n = 5;

cout << "The original array is : \n";
for( int i =0; i< n; i++){
    cout << arr[i] << " ";
}
cout << endl;

if (n > 0){
    cout << "The array after deleting the last element: \n";
    for( int i =0; i< n-1; i++){
        cout << arr[i] << " ";
    }
} else {
    cout << "The array is empty. Cannot delete.\n";
}
cout << endl;

return 0;
}
