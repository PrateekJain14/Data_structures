#include <iostream>
/*
Given an array A of size N, the task is to check if the given array represents a Binary Max Heap.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two lines.
The first line of input contains an integer N denoting the size of the array. Then in the next line are N space separated array elements.

Output:
If array represents a Binary Max Heap, print "1", else print "0" (without quotes).
*/
using namespace std;

bool isMaxHeap(int tree[],int n, int i){
    int left = 2*i+1;
    int right = 2*i+2;
    if(i<n){
        if(left < n && right < n){
            if(tree[i]>tree[left] && tree[i]>tree[right])
            return (isMaxHeap(tree,n,left) && isMaxHeap(tree,n,right));
            else
            return false;
        }
        else if(left < n){
             if(tree[i]>tree[left])
              return (isMaxHeap(tree,n,left));
             else
              return false;
        }
        else if(right < n){
             if(tree[i]>tree[right])
              return (isMaxHeap(tree,n,right));
             else
              return false;
        }
       else
          return true;
    }
}

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int val = isMaxHeap(a,n,0);
        cout<<val<<endl;
    }
	//code
	return 0;
}
