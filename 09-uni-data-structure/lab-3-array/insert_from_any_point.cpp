#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[100] = {10,20,30,40,50};
int n = 5;

cout << "Insert at Specific Location\n";
cout << "The original array is : \n";
for( int i =0; i< n; i++){
    cout << arr[i] << " ";
}
cout << endl;

int location = 3; 
int newValue = 25; 

for(int i = n - 1; i >= location - 1; i--){
    arr[i + 1] = arr[i];
}

arr[location - 1] = newValue;
n++; 

cout << "The new array is : \n";
for( int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
cout << endl;

return 0;
}
