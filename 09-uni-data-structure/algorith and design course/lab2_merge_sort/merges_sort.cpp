#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;



void merge_just(int A[], int p, int q, int r){

    int n1 = (q-p+1);
    int n2 = (r-q);

    int L[n1+1], R[n2+1];

    for (int i=0; i < n1; i++){
        L[i] = A[p+i];
    }

    for( int j = 0; j< n2; j++){
        R[j] = A[q+1+j];
    }

    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    int i=0, j=0;

    for ( int k=p; k<= r; k++){
        if (L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
    }
}


void mergeSort(int A[], int initial_index_of_A, int last_index_of_A){

    int p = initial_index_of_A;
    int r  = last_index_of_A;

    if ( p<r ){
        int q = (p+r)/2;
        mergeSort(A,p,q);
        mergeSort(A,q+1,r);
        merge_just(A,p,q,r);
    }

}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

int A[] = {38,27,43,3,9,82,10};

int n = sizeof(A)/sizeof(A[0]);


mergeSort(A,0,n-1);

cout << "sorted array :\n";

display(A,n);



return 0;
}
