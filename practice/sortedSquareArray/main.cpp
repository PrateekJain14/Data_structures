#include <iostream>
#include <cmath>
// input a sorted array of integers
// output sorted array of square of integers
using namespace std;

void sortMethodFirst(int a[], int size){
for(int i=0;i<size;i++){
    a[i] = a[i]*a[i];
}
for(int i=0;i<size-1;i++){
    for(int j=0;j<size-1-i;j++){
        if(a[j]>a[j+1]){
           int temp = a[j];
           a[j] = a[j+1];
           a[j+1] = temp;
        }
    }
}
}

int main()
{
    int a[] = {-5,-3,-1,2,4};
    int size = sizeof a/sizeof a[0];
    sortMethodFirst(a,size);

    for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
