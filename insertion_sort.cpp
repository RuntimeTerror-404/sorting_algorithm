#include <bits/stdc++.h>

using namespace std;

void insertionSort(int a[], int n){
    for(int i=1; i<n; i++){
        int current = a[i];
        int j = i-1;
        while(a[j]>current && j>=0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }
}

int main(){
    int a[] = {21, 10, 17, 32, 90, 41};
    int n = sizeof(a)/sizeof(int);
    insertionSort(a,n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}