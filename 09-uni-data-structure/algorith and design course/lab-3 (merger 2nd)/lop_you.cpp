#include <iostream>
#include <climits>
using namespace std;

struct Students{
    char name[50];
    int marks;
};


void MERGE(Students A[], int p, int q, int r){

    int n1 = (q-p+1);
    int n2 = (r-q);

    struct Students L[n1+1], R[n2+1];

    for (int i=0; i < n1; i++){
        L[i] = A[p+i];
    }

    for( int j = 0; j< n2; j++){
        R[j] = A[q+1+j];
    }

    L[n1].marks = INT_MAX;
    R[n2].marks = INT_MAX;

    int i=0, j=0;

    for ( int k=p; k<= r; k++){
        if (L[i].marks <= R[j].marks){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
    }
}


void MERGE_SORT(Students A[], int p, int r){

    if(p<r){
        int q = (p+r)/2;
        MERGE_SORT(A,p,q);
        MERGE_SORT(A,q+1,r);
        MERGE(A,p,q,r);
    }
}

int main(){

    ///merge sort stability check

/****

    name    mark
    Ali     80
    Bina    90
    Rafi    80
    Nila    90

    == sort by the marks ==
    hint :
        - use merge sort
        - use structure

****/

    struct Students A[] = {{"Ali",80},{"Bina",90},{"Rafi",80},{"Nila",90}};

    int n = sizeof(A)/sizeof(A[0]);

    cout << "Before Sorting \n";

    for(int i=0; i<n; i++){
        cout << A[i].name << "   " << A[i].marks << "\n";
    }

    cout << "\n";

    MERGE_SORT(A,0,n-1);

        cout << "After Sorting \n";

    for(int i=0; i<n; i++){
        cout << A[i].name << "   " << A[i].marks << "\n";
    }



    return 0;
}
