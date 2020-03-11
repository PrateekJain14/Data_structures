#include <iostream>

using namespace std;


void disp(int a[], int size){
for(int i=0;i<size;i++){
    cout<< a[i]<<" ";
}
}
void mergeImplement(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int a[],int l,int h){
if(l<h){
    int mid = (l+(h-1))/2;

    mergeSort(a,l,mid);
    mergeSort(a,mid+1,h);
    mergeImplement(a,l,mid,h);
}

}


int main()
{
    int a[] = {7, 1, 3, 20, 15, 100, 50};
    mergeSort(a,0,6);
    disp(a,7);
    return 0;
}

