#include <iostream>
// calculate sum of element from range l-r
using namespace std;
int prefix[5];

void input(int a[], int size){
cin>>a[0];
prefix[0] = a[0];
for(int i=1;i<size;i++){
    cin>>a[i];
    prefix[i] = prefix[i-1] + a[i];
}
}

int findSumRange(int a[], int low , int high){
}

int main()
{
    int a[5];
    input(a,5);
    return 0;
}
