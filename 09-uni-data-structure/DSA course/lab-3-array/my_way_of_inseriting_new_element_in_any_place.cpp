
#include <iostream>
using namespace std;

int main()
{
    int i=0, n=5,loc = 3, index = loc -1 ,val =12;
    
    int arr[100] = {2,4,5,6,7};
    
    while(i<n){
        cout << arr[i] <<" ";
        i++;
    }
    
    cout << endl;
    
    for(i = n; i >= index ; i--){
        arr[i+1] = arr[i];
    }
    
    arr[index] =  val;
    n++;
    
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    
    return 0;
}