#include <iostream>
using namespace std;


int main(){

int arr[10] = {1,2,3,4,5};

 cout << "using for loop: "<< endl;

    for ( int i=0; i<5; i++){
        cout << arr[i]<< " ";
    }
     cout << endl;

 cout << "using while loop: "<< endl;
    int j = 0;
    while (j<5){
        cout << arr[j]<< " ";
        j++;
    }
    cout << endl;

 cout << "using do while loop: "<< endl;

    int k = 0;
    do{
        cout << arr[k]<< " ";
        k++;
    }while (k<5);

return 0;
}
