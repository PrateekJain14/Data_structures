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

void display(int a[]){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int findSumRange(int low , int range){
    return (prefix[range] - prefix[low-1]);
}

int main()
{
    int a[5];
    input(a,5);
    display(a);
    display(prefix);
    cout<<findSumRange(1,3);
    return 0;
}
