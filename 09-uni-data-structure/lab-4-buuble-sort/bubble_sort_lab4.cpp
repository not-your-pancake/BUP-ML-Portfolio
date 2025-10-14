
#include <bits/stdc++.h>
using namespace std;

int main (){

    int size = 5, temp ;
    int arr[size] = {5, 1, 4, 2, 8};

    cout << "The array: " << endl;
    for( int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

// bubble sort
    for(int i=0; i<size ; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // cout << endl;
    // cout << "The sorted array: " << endl;
    // for( int i=0; i<size; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    ///Linear search

    int find1 = 4;

    for (int i=0; i<size; i++){
        if(arr[i]==find1){
            cout << find1 <<" -> has been found" << endl;
            break;
        }
    }

// /// binary search

//     int find2 = 2;
//     int low = 0, high = size-1, mid=0;

//     while(low<=high){
//         mid = (high + low )/2;

//         if( arr[mid] == find2 ){
//             cout << "the element "<< find2 <<" is in index : " << mid ;
//             break;
//         }
//         else if( arr[mid]> find2){
//             high = mid-1;        
//         }
//         else{
//             low = mid + 1;
//         }        
//     }
    return 0;
}

