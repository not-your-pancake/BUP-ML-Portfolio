#include<iostream>
#include <climits>

using namespace std;

int partition(int A[], int low, int high){

    int pivot = A[low];
    int i = low+1;
    int j = high;
    while(i<=j){
        while (i <= high && A[i] <= pivot)
            i++;
        while(A[j]>pivot)
            j--;
        if(i<j){
            swap(A[i],A[j]);
        }
    }
    swap(A[low],A[j]);
    return j;
}

void quickSort(int A[], int low, int high){

    if(low<high){
        int p = partition(A,low,high);
        quickSort(A,low,p-1);
        quickSort(A,p+1,high);
    }
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
}

int main(){

    int A[] = {25,17,31,13,2};
    int n = sizeof(A)/sizeof(A[0]);

    cout << "Before Sorting \n";

    display(A,n);

    quickSort(A,0,n-1);
    cout << "After Sorting \n";
    display(A,n);
    return 0;
}
