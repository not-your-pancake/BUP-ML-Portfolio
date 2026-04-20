#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[100] = {10,20,30,40,50};
int n = 5;

cout << "The array is : \n";
for( int i =0; i< n; i++){
    cout << arr[i] << " ";
}

//iNSERT NEW VALUE IN ANY LOCATION

//cin >> location;
//cin >> newValue;

int location = 3;
int newValue = 25;

for(int i= n-1; i>=location-1; i--){
    arr[i+1] = arr[i];
}

cout << endl;
//cin >>
arr[location-1] = newValue;
n++;

cout << endl;
cout << newValue << endl;
cout << arr[2] << endl;


cout << "The new array is : \n";
for( int i =0; i< n; i++){
    cout << arr[i] << " ";
}

// arr = {10,20,25,30,40,50};

// PUT A NEW VALUE IN THE FRONT

for( int i = n-1; i>=0;i--){
    arr[i+1] = arr[i];
}

arr[0] = newValue;
cout << endl;
cout << "The new array is where the value in in first : \n";
for( int i =0; i< n; i++){
    cout << arr[i] << " ";
}

// deletion of last element
cout << endl;
if ( arr[n] != 0){
    cout << "The deleted new array is where the value in in first : \n";
    for( int i =0; i< n-1; i++){
        cout << arr[i] << " ";
    }
}

return 0;
}
