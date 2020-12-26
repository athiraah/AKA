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
        for(j = 0; j < arr[i]; j++) {
            cout << "-";
        }
        cout << endl;
    }
    cout << endl << endl;
}

void quickSort(int arr[], int left, int right)
{
      int x = left, y = right;int temp;
      int pivot = arr[(left+right)/2];/* partition */
        while (x<y){
            while (arr[x] < pivot)
            x++;
            while (arr[y] > pivot)
            y--;
            if (x<=y){
                temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
                x++;y--;
            };
        }; /* recursion */
        if (left < y)
            quickSort(arr, left, y);
        if (x < right)
            quickSort(arr, x, right);
}

int main() {
    int x, n ,data[50];
    
    cout<<" Banyak Data : ";cin>>n;
    for(x=0; x < n; x++){
        cout<<" Data ["<<x<<"] : ";cin>>data[x];
        }
    cout<<"\nData Sebelum Diurutkan: "<<endl;
    for(x=0;x < n; x++){
        cout<<data[x]<<" ";
    }
    cout<<"\n";
    quickSort(data, 0, n - 1);//hasil pengurutan
    cout<<"\nHasil dari pengurutan:\n";  
    {
    int x;
    for (x=0; x < n; x++)
        cout<<data[x]<<" ";
        cout<<"\n";
    };
}