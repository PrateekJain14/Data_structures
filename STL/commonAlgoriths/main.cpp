#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int arr[] = {10,25,15,5,11,30,36,50,45,100,75};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+size);

    cout<<"Vector : ";
    for(int i = 0 ; i<size;i++)
        cout<<vect[i]<<" ";

    sort(vect.begin(),vect.end());
    cout<<"\nVector : ";
    for(int i = 0 ; i<size;i++)
        cout<<vect[i]<<" ";

    cout<<"\nMaximum element in vector is : "<<*max_element(vect.begin(),vect.end());
    cout<<"\nMinimum element in vector is : "<<*min_element(vect.begin(),vect.end());

    cout << "\nThe summation of vector elements is: ";
    cout << accumulate(vect.begin(), vect.end(), 0);

    return 0;
}
