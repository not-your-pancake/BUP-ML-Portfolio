#include <iostream>
#include <cmath>
using namespace std;

int partition(int arr[], int lb, int ub){
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    
    while (start < end ){
        while(arr[start] <= pivot && start < ub){
            start ++;
        }
        
        while(arr[end] > pivot){
            end --;
        }
        
        if(start < end ){
            swap (arr[start],arr[end]);
        }
    } // end of mother while loop 
    swap(arr[lb], arr[end]); // lb keno korlam ? karon pivot hocche value not index
    return end;
    
}

void QuickSort(int arr[], int lb, int ub){
    if(lb<ub){
        int loc = partition(arr,lb,ub);
        QuickSort(arr,lb,loc-1);
        QuickSort(arr,loc+1,ub);
    }

}

void display(int A[], int n){
    for(int i=0; i<n; i++){
        cout << A[i] <<" ";
    }
}

bool arithmatic(int arr[], int n){
    int value = 0;
    int AA[n-1];
    
    for (int i = 0; i<n-1 ; i++){
        value = abs(arr[i] - arr[i+1]);
        AA[i] = value;
    }
    
    for(int j=0; j<n-2; j++){
        if(AA[j] != AA[j+1]){
            return false; // match khay nay
        }
    }
    
    return true;
}

int main(){
    
    int arr[7] = {1,3,5,9,11,13,7};
    cout << "before quick sort:"<< endl; 
    display(arr,7);
    
    cout <<"\n" <<"after quick sort:"<< endl; 
    QuickSort(arr,0,6);
    display(arr,7);
    
    if (arithmatic(arr,7)){
        cout << "yes progression";
    }else{
        cout << "NOOO";
    }
    
    return 0;
}
