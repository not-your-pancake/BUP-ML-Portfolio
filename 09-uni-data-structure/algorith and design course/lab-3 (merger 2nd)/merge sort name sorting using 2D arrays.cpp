#include <iostream>
#include <cstring> // Required for strcmp and strcpy
using namespace std;

#define SIZE 5
#define MAXL 50

void merge(char arr[][MAXL], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    char L[n1][MAXL], R[n2][MAXL];

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++) {
        strcpy(L[i], arr[l + i]);
    }
    for (int j = 0; j < n2; j++) {
        strcpy(R[j], arr[m + 1 + j]);
    }

    int i = 0, j = 0, k = l;

    // Merge the temp arrays back into arr[l..r]
    while (i < n1 && j < n2) {
        // strcmp returns < 0 if L[i] comes before R[j] alphabetically
        if (strcmp(L[i], R[j]) <= 0) {
            strcpy(arr[k], L[i]);
            i++;
        } else {
            strcpy(arr[k], R[j]);
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[] if any
    while (i < n1) {
        strcpy(arr[k], L[i]);
        i++;
        k++;
    }

    // Copy remaining elements of R[] if any
    while (j < n2) {
        strcpy(arr[k], R[j]);
        j++;
        k++;
    }
}

void mergeSort(char arr[][MAXL], int l, int r) { /// l = low and r == high
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    char names[SIZE][MAXL];

    cout << "Enter " << SIZE << " names:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> names[i];
    }

    mergeSort(names, 0, SIZE - 1);

    cout << "\nSorted Names:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
