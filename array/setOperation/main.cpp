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

// FOR SORTED ARRAY

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

// FOR array A - B
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


int main()
{
    struct Array arr1 = {{2,3,4,8,10},10,5};
    struct Array arr2 = {{1,2, 3,5,7},10,5};
    struct Array *arr3;

    arr3 = Union(arr1, arr2);
    cout<<"\nUnion";
    display(*arr3);
    cout<<"\n---------------------------------";

    arr3 = Intersection(arr1, arr2);
    cout<<"\nIntersection";
    display(*arr3);
    cout<<"\n---------------------------------";

    arr3 = Difference(arr1, arr2);
    cout<<"\nDifference";
    display(*arr3);
    cout<<"\n---------------------------------";

    return 0;
}
