#include<iostream>
using namespace std;

int main(){
    int i=0;
    int n = 5;
    
    int arr[10] = {2,4,5,6,7};

    cout << "t he orgnl array: "<< endl;
    while(i<n){
        cout << arr[i] << " ";
        i++; 
    }
    // insert at the end

    int e_end = 12;
    arr[n] = e_end;
    n++;

    cout << " the new arrray: " << endl;
    while(i<n){
        cout << arr[i] << " ";
        i++; 
    }

    return 0;
}