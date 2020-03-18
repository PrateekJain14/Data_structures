#include <iostream>

using namespace std;

void quickSort(int a[], int l, int h){
    if(l < h){
        int p = partition(a,l,h);

        quickSort(a,l,p-1);
        quickSort(a,p+1,h);
    }
}
int main()
{
    int a[] = {10, 5, 15, 50, 20, 25};
    int size = sizeof(a)/sizeof(a[0]);
    quickSort(a,0,n-1);
    return 0;
}
