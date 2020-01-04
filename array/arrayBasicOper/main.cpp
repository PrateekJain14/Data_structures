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

int get(struct Array arr,int index){
if(index >= 0 && index <= arr.length-1){
    return arr.A[index];
}
return -1;
}

void set(struct Array *arr,int index,int val){
if(index >= 0 && index <= arr->length-1){
    arr->A[index] = val;
}
}

int max(struct Array arr){
int maximum = arr.A[0];
for(int i=0;i <= arr.length-1;i++){
    if(arr.A[i]> maximum)
        maximum = arr.A[i];
}
return maximum;
}

int min(struct Array arr){
int minimum = arr.A[0];
for(int i=0;i <= arr.length-1;i++){
    if(arr.A[i]< minimum)
        minimum = arr.A[i];
}
return minimum;
}

int sum(struct Array arr){
int total = 0;
for(int i=0;i <= arr.length-1;i++){
    total += arr.A[i];
}
return total;
}

float avg(struct Array arr){
return sum(arr)/arr.length;
}

int main()
{
    int ele,searchBinary;
    struct Array arr = {{2,3,4,5,6},10,5};
    cout<<get(arr, 2);
    set(&arr, 3, 100);
    cout<<"\nMAX :"<<max(arr);
    cout<<"\nMIN :"<<min(arr);
    cout<<"\nTOTAL :"<<sum(arr);
    cout<<"\nAVERAGE :"<<avg(arr);


    display(arr);
    return 0;
}
