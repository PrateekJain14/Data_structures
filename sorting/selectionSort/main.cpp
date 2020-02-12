#include <iostream>

using namespace std;

void swap(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}

// Find smallest and set it to first location and so on.
void selectionSort(int a[], int size){
int min;
for(int i = 0;i < size-1; i++){
    min = i;
    for(int j = i+1; j < size-1; j++){
        if(a[j]<a[min]){
            min = j;
        }
    }
    if(min != i)
        swap(a[i],a[min]);
}
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
