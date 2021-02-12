#include <iostream>
using namespace std;

int partition(int s,int a[], int e){
    int i = s-1;
    int j = s;
    int pivot = a[e];
    for(;j<e; j++){
        if(a[j] <= pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[e]);
    return i+1;
};
void quickSort(int s, int a[], int e){
    if(s>=e){
        return;
    }

    int p = partition(s,a,e);
    quickSort(s,a,p-1);
    quickSort(p+1,a,e);
};

int main(){
    int a[] = {21, 10, 17, 32, 45, 13, 67, 19};
    int n = sizeof(a)/sizeof(int);

    quickSort(0, a, n-1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}