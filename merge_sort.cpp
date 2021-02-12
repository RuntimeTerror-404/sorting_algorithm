#include <iostream>

using namespace std;

void merge(int a[], int s, int e){
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;
    int temp[100];

    while(i<=mid && j<=e){
        if(a[i]<a[j]){
            temp[k] = a[i];
            k++; i++;
        }
        else{
            temp[k] = a[j];
            k++; j++;
        }
        // k++; i++; j++;
    }
    while(i<=mid){
        temp[k] = a[i];
        i++; k++;
    }
    while(j<=e){
        temp[k] = a[j];
        j++; k++;
    }

    for(int i=s; i<=e; i++){
        a[i] = temp[i];
    }
}

void mergeSort(int a[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);

    merge(a, s, e);
    
}

int main(){
    int a[] = {21, 10, 17, 32, 45, 13, 67, 44};
    int n = sizeof(a)/sizeof(int);

    mergeSort(a, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" , ";
    }
}