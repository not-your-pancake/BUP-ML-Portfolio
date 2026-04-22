#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int ways(int n){
    vector<int> notebook(n+1,0);

    notebook[0] = 1;
    notebook[1] = 1;

    for(int i=2; i<=n; i++){
        notebook[i] = notebook[i-1] + notebook[i-2];
    }

    cout << notebook[n];
}

int main(){

    // A person is climbing a staircase with n steps. They can climb either 1 step or 2 steps at a time. Find the number of distinct ways to reach the top.

    int stairs;

    cout << "enter number of staris: \n";
    cin >> stairs;

    // stairs = 5;

    ways(stairs);

    return 0;
}
