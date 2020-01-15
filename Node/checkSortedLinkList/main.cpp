#include <iostream>

using namespace std;
struct Node{
int data;
Node * next;
}*first=NULL;

void create(int a[], int len){
struct Node *t,*last;

first = new Node;
first->data = a[0];
first->next =  NULL;
last = first;

for(int i =1;i<len;i++){
t = new Node;
t->data = a[i];
t->next = NULL;
last->next = t;
last = t;
}

}

void display(struct Node* ptr){
while(ptr != NULL){
cout<<ptr->data<<endl;
ptr =  ptr->next;
}
}

bool checkSorted(struct Node* p){
int x=-32768;
while(p != NULL){
if(p->data<x){
return false;
}
x=p->data;
p=p->next;
}
return true;
}

int main()
{
    int pos;
    int a[] = {10,15,29,25,30};
    create(a,5);
    display(first);

    bool val = checkSorted(first);
    if(val){
    cout<<"\nSorted";
    }
    else{
    cout<<"\nNot Sorted";
    }
    return 0;
}
