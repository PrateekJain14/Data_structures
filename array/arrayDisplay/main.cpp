#include <iostream>

using namespace std;
struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
 for(int i=0;i<arr.length;i++){
        cout<<"\n"<<arr.A[i];
    }
}

int main()
{
    struct Array arr;
    int n;
    cout<<"Enter size of array";
    cin>>arr.size;

    arr.A = new int[arr.size];
    arr.length = 0;

    cout<<"\nEnter number of elements you want to enter :";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr.A[i];
    }
    arr.length = n;
    display(arr);
    return 0;
}
