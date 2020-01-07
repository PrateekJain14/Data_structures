#include <iostream>

// Diagonal matrix- A matrix whose all elements are zero other than it's diagonal.
// To store those element we store only diagonal elements to save space in a program
using namespace std;

void set(int a[], int i, int j, int x){
    if(i==j){
        a[i-1]=x;
    }
}

int get(int a[], int i, int j){
    if(i==j){
        return a[i-1];
    }
    return 0;
}

int main()
{
    int a[5];

    return 0;
}
