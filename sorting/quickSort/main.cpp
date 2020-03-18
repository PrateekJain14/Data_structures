#include <iostream>

using namespace std;

void printArray(int a[], int size){
    cout<<"Sorted Array : ";
    for(int i =0;i < size ;i++)
        cout<<a[i]<<"\t";
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int l, int h){
   int i = (l-1);
   int pivot = a[h];
   for(int j=l; j<= h-1;j++){
      if(a[j] < pivot){
        i++;
        swap(&a[i],&a[j]);
      }
   }
    swap(&a[i+1],&a[h]);
    return (i+1);
}

void quickSort(int a[], int l, int h){
    if(l < h){
        int p = partition(a,l,h);
        quickSort(a,l,p-1);
        quickSort(a,p+1,h);
    }
}
int main()
{
    int a[] = {10, 5, 15, 50, 20, 25};
    int n = sizeof(a)/sizeof(a[0]);
    quickSort(a,0,n-1);
    printArray(a,n);
    return 0;
}
