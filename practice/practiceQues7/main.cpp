#include <iostream>
/*
Given a binary tree you need to check if it follows max heap property or not.
Input:
The task is to complete the method which takes one argument, root of Binary Tree. The struct Node has a data part which stores the data,
 pointer to left child and pointer to right child.There are multiple test cases. For each test case, this method will be called individually.
*/

using namespace std;


bool isHeap(Node * tree)
{
 if((tree->left) && (tree->right)){
     if((tree->left->data > tree->data) && (tree->right->data > tree->data))
     return false;
     else
     return (isHeap(tree->left) && isHeap(tree->right));
 }
 else if(tree->left){
     if(tree->left->data > tree->data)
     return false;
     else
     return (isHeap(tree->left));
 }
 else if(tree->right){
     if(tree->right->data > tree->data)
     return false;
     else
     return (isHeap(tree->right));
 }
 else{
     return true;
 }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
