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

// Binary search--> array need to be sorted

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

// Binary search--> array need to be sorted (Recursive version)

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
    int ele,searchBinary;
    struct Array arr = {{2,3,4,5,8},10,5};
    ele = LinearSearch(arr,3);
    if(ele != -1){
    cout<<"\n element found at position  :"<< ele+1;
    }
    searchBinary = BinarySearch(arr,3);
    if(searchBinary != -1){
    cout<<"\n Binary search element found at position  :"<< searchBinary+1;
    }

    searchBinary = BinarySearchRecursion(arr,3,0,arr.length-1);
    if(searchBinary != -1){
    cout<<"\n Binary search recursion element found at position  : "<< searchBinary+1;
    }
    //display(arr);
    return 0;
}
