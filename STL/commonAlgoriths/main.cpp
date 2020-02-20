#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {10,25,15,5,11,30,36,50,45,100,75};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+size);

    cout<<"Vector : ";
    for(int i = 0 ; i<size;i++)
        cout<<vect[i]<<" ";
    return 0;
}
