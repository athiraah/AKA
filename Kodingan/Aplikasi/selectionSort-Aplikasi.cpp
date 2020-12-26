#include <iostream>
#include <cstdlib>
#include<time.h>

#define MAX_ARR 100

using namespace std;

void printArray(int arr[], int n) {
    system("CLS");
    int i, j;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " = ";
        for (j = 0; j < arr[i]; j++) {
            cout << "-";
        }
        cout << endl;
    }
    cout << endl << endl;
}

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
        printArray(arr, n);
    }
}

int main() {

    // Use current time as seed for random generator
    int arr[MAX_ARR];
    srand(time(NULL));

    for (int i = 0; i < MAX_ARR; i++)
        arr[i] = rand() % 50;

    selectionSort(arr, MAX_ARR);

    return 0;
}