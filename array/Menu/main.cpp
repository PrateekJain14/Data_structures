#include <iostream>

using namespace std;


struct Array{
    int *A;
    int size;
    int length;
};


void swaping(int *a,int *b){
int temp ;
temp = *a;
*a= *b;
*b = temp;
}

int del(struct Array *arr,int index){
if(arr->length == 0){
    return -1;
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

void append(struct Array *arr, int val){
if(arr->length == arr->size){
    return;
}
  arr->A[arr->length++] = val;
}

void insert(struct Array *arr,int index, int val){
if(arr->length == arr->size){
    return;
}
if(index >= 0 || index <=arr->length){
for(int i=arr->length-1; i >= index; i-- ){
    arr->A[i+1] = arr->A[i];
}
arr->A[index]= val;
arr->length++;s
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

void display(struct Array arr){
 for(int i=0;i<arr.length;i++){
        cout<<"\n"<<arr.A[i];
    }
}

struct Array * Union(struct Array arr1,struct Array arr2){
int i=0,j=0,k=0;
struct Array *arr3 = new Array();

 while(i<arr1.length && j<arr2.length){
    if(arr1.A[i]<arr2.A[j])
        arr3->A[k++]=arr1.A[i++];
    else if(arr1.A[i]>arr2.A[j])
        arr3->A[k++]=arr2.A[j++];
    else{
        arr3->A[k++]=arr1.A[i++];
        j++;
    }
    }
 while(i<arr1.length)
    arr3->A[k++]=arr1.A[i++];
 while(j<arr2.length)
     arr3->A[k++]=arr2.A[j++];

 arr3->length = k;
 arr3->size =10;

 return arr3;
};

struct Array * Intersection(struct Array arr1,struct Array arr2){
int i=0,j=0,k=0;
struct Array *arr3 = new Array();

 while(i<arr1.length && j<arr2.length){
    if(arr1.A[i]<arr2.A[j])
        i++;
    else if(arr1.A[i]>arr2.A[j])
        j++;
    else{
        arr3->A[k++]=arr1.A[i++];
        j++;
    }
    }
 arr3->length = k;
 arr3->size =10;

 return arr3;
};

struct Array * Difference(struct Array arr1,struct Array arr2){
int i=0,j=0,k=0;
struct Array *arr3 = new Array();

 while(i<arr1.length && j<arr2.length){
    if(arr1.A[i]<arr2.A[j])
        arr3->A[k++]=arr1.A[i++];
    else if(arr1.A[i]>arr2.A[j])
       j++;
    else{
        i++;
        j++;
    }
    }

 while(i<arr1.length)
    arr3->A[k++]=arr1.A[i++];

 arr3->length = k;
 arr3->size =10;
 return arr3;
};

int LinearSearch(struct Array arr,int key){
if(arr.length == 0){
    return -1;
}
for(int i=0; i <= arr.length-1; i++ ){
    if(arr.A[i] == key)
        return i;
}
return -1;
}

int BinarySearch(struct Array arr,int key){
int low=0;
int high = arr.length-1;
int mid;
while(low<= high){
    mid = (low+high)/2;
    if(arr.A[mid]== key)
        return mid;
    else if(arr.A[mid] > key)
        high = mid -1;
    else
        low = mid + 1;

}
return -1;
}

int BinarySearchRecursion(struct Array arr,int key,int low, int high){
int mid;
while(low<= high){
    mid = (low+high)/2;
    if(arr.A[mid]== key)
        return mid;
    else if(arr.A[mid] > key)
        return BinarySearchRecursion(arr,key,low,mid-1);
    else
        return BinarySearchRecursion(arr,key,mid + 1,high);

}
return -1;
}


int main()
{
    struct Array arr;
    int choice,x,index;
    cout<<"ENTER SIZE OF ARRAY  :";
    cin>>arr.size;

    arr.A = new int[arr.size];

    do
    {
    cout<<"\nMenu\n";
    cout<<"1. Insert\n";
    cout<<"2. Delete\n";
    cout<<"3. Search\n";
    cout<<"4. Sum\n";
    cout<<"5. Display\n";
    cout<<"6. Exit\n";

    cout<<"Enter your choice(1 to 6)    :";
    cin>>choice;

    switch(choice){
        case 1: cout<<"\n Enter an element and index    :";
                cin>>x>>index;
                insert(&arr,index,x);
                break;
        case 2: cout<<"\n Enter the index you want to delete    :";
                cin>>index;
                x = del(&arr,index);
                cout<<"\nDeleted element is   : "<<x;
                break;
        case 3: cout<<"\n Enter an element you want to search for   :";
                cin>>x;
                index = LinearSearch(arr,x);
                cout<<"\nElement found at index   : "<<index+1;
                break;
        case 4: cout<<"\n Sum is    : "<<sum(arr);
                break;
        case 5: display(arr);

    }
    }while(choice<6);
return 0;
}
