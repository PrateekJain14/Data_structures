#include <iostream>

using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
 for(int i=0;i<arr.length;i++){
        cout<<"\n"<<arr.A[i];
    }
}

void reverseArray(struct Array *arr){
    int *B;
    int i,j;
    B = new int[arr->length];
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(i=0;i<=arr->length-1;i++){
        arr->A[i] = B[i];
    }
}

void swaping(int *a,int *b){
int temp ;
temp = *a;
*a= *b;
*b = temp;
}

void reverseArraySecond(struct Array *arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
       swaping(&arr->A[i],&arr->A[j]);
    }
}

void leftShift(struct Array *arr){
    int i;
    for(i=0;i<arr->length;i++){
    arr->A[i] = arr->A[i+1];
    }
}

void leftRotation(struct Array *arr){
    int i;
    int rotateValue = arr->A[0];
    for(i=0;i<arr->length-1;i++){
    arr->A[i] = arr->A[i+1];
    }
    arr->A[arr->length-1]=rotateValue; 
}

int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};
    reverseArray(&arr);
    display(arr);
    cout<<"\n---------------------------------";
    reverseArraySecond(&arr);
    display(arr);
    cout<<"\n---------------------------------";
    leftShift(&arr);
    display(arr);
    cout<<"\n---------------------------------";
    leftRotation(&arr);
    display(arr);
    return 0;
}
