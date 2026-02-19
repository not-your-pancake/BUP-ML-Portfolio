#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define SIZE 5

// Merge two subarrays of names[]
void merge(string names[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temporary vectors for the split
    vector<string> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = names[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = names[m + 1 + j];

    int i = 0, j = 0, k = l;

    // Merge back into names[l..r]
    while (i < n1 && j < n2) {
        // Simple string comparison (alphabetical)
        if (L[i] <= R[j]) {
            names[k] = L[i];
            i++;
        } else {
            names[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while (i < n1) {
        names[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        names[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(string names[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(names, l, m);
        mergeSort(names, m + 1, r);
        merge(names, l, m, r);
    }
}

int main() {
    string names[SIZE];

    cout << "Enter " << SIZE << " names:\n";
    for (int i = 0; i < SIZE; i++) {
        getline(cin, names[i]); // Using getline to allow names with spaces
    }

    mergeSort(names, 0, SIZE - 1);

    cout << "\n--- Alphabetically Sorted Names ---\n";
    for (int i = 0; i < SIZE; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
