#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[100] = {10,20,30,40,50};
int n = 5;
int newValue = 25; 
cout << "Insert at the Front\n";
cout << "The original array is : \n";
for( int i =0; i< n; i++){
    cout << arr[i] << " ";
}
cout << endl;

for( int i = n - 1; i >= 0; i--){
    arr[i + 1] = arr[i];
}
arr[0] = newValue;

cout << "The new array is where the value is in first: \n";
for( int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
cout << endl;

return 0;
}
