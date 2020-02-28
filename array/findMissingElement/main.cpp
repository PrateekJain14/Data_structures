#include <iostream>

using namespace std;

int main()
{
    int a[] = {6,7,8,9,10,15,12,13};
    int length = sizeof(a)/sizeof(a[0]);

    //single missing element
    int difference = a[0];
    for(int i=1;i<length;i++){
        if(a[i]-i != difference){
            cout<<"missing element is : "<<i+difference;
        }
    }

    // for Multiple missing elements
    int b[] = {6,7,8,9,11,12,15,16,17,18,19};
    length = sizeof(a)/sizeof(a[0]);

    int diff = a[0];
    for(int i=1;i<length;i++){
        if(a[i]-i != diff){
            while(diff<a[i]-i){
                cout<<"\nmissing element is :"<<i+diff;
                diff++;
            }
        }
    }
    return 0;
}
