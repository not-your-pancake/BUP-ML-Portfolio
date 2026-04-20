#include <iostream>
#include <vector>

using namespace std;

void get_fibbo(int n){

    vector<int> note(n+1,0); /// n+1 -> size of note && 0 -> put zero in every empty place

    note[0] = 0;
    note[1] = 1;

    for(int i=2; i<=n; i++){
        note[i] = note[i-1] + note[i-2];
    }

    cout << "the fibbonacchi number is: " << note[n];
}


int main() {
    int n;
    cout << "Enter nth number you want: ";
    cin >> n;

    get_fibbo(n);


    return 0;
}
