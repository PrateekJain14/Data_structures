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

// inserting in an array at index
int del(struct Array *arr,int index){
if(arr->length == 0){
    return 0;
}
if(index >= 0 || index <=arr->length){
int deletedEle = arr->A[index];
for(int i=index; i <= arr->length-1; i++ ){
    arr->A[i] = arr->A[i+1];
}
arr->length--;
return deletedEle;
}
}

int main()
{
    int ele;
    struct Array arr = {{2,3,4,5,6},10,5};
    ele = del(&arr,3);
    cout<<"\n Deleted element :"<< ele;
    display(arr);
    return 0;
}
