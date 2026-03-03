#include <iostream>
using namespace std;

void merge_sort(int arr[], int lb, int ub){
    if (lb<ub){
        int mid = (lb + ub) / 2;
        merge_sort(arr, lb, mid);
        merge_sort(arr, mid+1, ub);
        merge(arr,lb,mid,ub);
    }
}

void merge(int arr[], int lb, int mid, int ub){
    int i = lb;
    int j = mid + 1;
    int k = lb;
}

int main(){

    



    return 0;
}