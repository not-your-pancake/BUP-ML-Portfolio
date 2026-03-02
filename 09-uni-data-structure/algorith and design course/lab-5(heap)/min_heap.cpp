#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i){

    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if( left<n && arr[left]<arr[smallest])
        smallest = left;

    if( right<n && arr[right]<arr[smallest])
        smallest = right;

    if(smallest!= i){
        swap(arr[i], arr[smallest]);
        heapify(arr,n,smallest);
    }
}

void insert(int arr[], int &n, int key){

    n++;
    int i = n-1;
    arr[n-1] = key;

    while(i>0 && arr[ (i-1)/2]> arr[i] ){
        swap(arr[i], arr[(i-1)/2]);
        i = (i-1)/2;
    }
}

void buildMeanHeap(int arr[],int n){
    for(int i=n/2-1; i>=0; i--){
        heapify(arr, n, i);
    }
}



int main(){

    int arr[] = {10,5,20,2,8};
    int n = 5;
    int key;

    buildMeanHeap(arr,n);

    cout << "before insertion" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << "\ninsert a key : " ;
    cin >> key;
    cout << endl;

    insert(arr,n,key);

    cout << "after insertion" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

return 0;
}
