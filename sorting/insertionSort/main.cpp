#include <iostream>

using namespace std;

void swap(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}

// add element and sort sub array
void insertionSort(int a[], int size){
int key,j;
for(int i = 1;i < size; i++){
key = a[i];
j = i-1;
while(j>=0 && a[j] > key){
    a[j+1] = a[j];
    j = j-1;
}
a[j+1] = key;
}
}

void disp(int a[], int size){
for(int i=0;i<size;i++){
    cout<< a[i]<<" ";
}
}

int main()
{
    int a[] = {7, 1, 3, 20, 15, 100, 50};
    insertionSort(a,7);
    disp(a,7);
    return 0;
}
