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

void append(struct Array *arr, int val){
if(arr->length == arr->size){
    return;
}
  arr->A[arr->length++] = val;
}

// inserting in an array at index
void insert(struct Array *arr,int index, int val){
if(arr->length == arr->size){
    return;
}
if(index >= 0 || index <=arr->length){
for(int i=arr->length-1; i >= index; i-- ){
    arr->A[i+1] = arr->A[i];
}
arr->A[index]= val;
arr->length++;
}
}

int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};;
    append(&arr, 10);
    insert(&arr,3,15);
    display(arr);
    return 0;
}
