#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {32, 12, 45, 56, 48};
    sort(a,a+5);

    for(int i=0; i < 5 ; i++)
        cout<<a[i]<<" ";

    if (binary_search(a, a + 5, 56))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
    return 0;
}
