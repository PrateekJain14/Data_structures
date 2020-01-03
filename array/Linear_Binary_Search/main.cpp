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


int main()
{
    int ele;
    struct Array arr = {{2,3,4,5,6},10,5};
    ele = LinearSearch(arr,3);
    if(ele != -1){
    cout<<"\n element found at position  :"<< ele+1;
    }
    //display(arr);
    return 0;
}
