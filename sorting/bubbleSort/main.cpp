#include <iostream>

using namespace std;

void swap(int *a, int *b){
int temp = *a;
*a= *b;
*b = temp;
}

void bubblesort(int a[], int size){
for(int i=0;i<size-1;i++){
    for(int j=0;j<size-1-i;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
}
}

void display(int a[]){
for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int a[5] = {10,5,20,15,25};
    bubblesort(a,5);
    display(a);
    return 0;
}
