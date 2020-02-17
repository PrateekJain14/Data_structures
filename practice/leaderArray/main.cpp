#include <iostream>

using namespace std;

void findLeader(int a[], int size){
 int leader;
 for(int i=0;i<size;i++){
        leader = a[i];
        int flag =0;
        for(int j = i+1;j<size;j++){
            if(leader<a[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0 || i == size-1){
            cout<<leader << " ";
        }
 }
}

void printLeader(int a[], int size){
 int max_right = a[size-1];
 cout<<max_right << " ";
 for(int i = size -2; i >=0;i--){
    if(a[i]>max_right){
        max_right = a[i];
        cout<<max_right << " ";
    }
 }
}

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    findLeader(arr, n);
    cout<<"\n--------------------\n";
    printLeader(arr, n);
    return 0;
}
