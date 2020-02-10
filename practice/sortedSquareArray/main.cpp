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

void sortMethodSecond(int b[],int size){
int left = 0;
int right = size-1;
int temp[size];
for(int i=size-1;i>=0;i--)
{
    if(abs(b[left])>b[right]){
        temp[i] = b[left]*b[left];
        left++;
    }
    else{
        temp[i] = b[right]*b[right];
        right--;
    }
}
for(int i=0;i<size;i++){
    b[i] = temp[i];
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
    cout<<endl<<"-------------"<<"\n";
    int b[] = {-5,-2,-1,3,4};
    size = sizeof b/sizeof b[0];
    sortMethodSecond(b,size);

    for(int i=0;i<size;i++){
    cout<<b[i]<<" ";
    }
    return 0;
}
