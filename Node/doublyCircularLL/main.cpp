#include <iostream>

using namespace std;
struct Node{
int data;
struct Node *prev;
struct Node *next;
}*first=NULL;

void create(int a[], int len){
struct Node *t, *last;
first = new Node;
first->data = a[0];
first->next = first;
first->prev = first;
last = first;

 for(int i=1;i<len;i++){
    t = new Node;
    t->data = a[i];
    t->next = last->next;
    last->next = t;
    t->prev = last;
    last = t;
 }
 first->prev = last;
}

void display(struct Node *ptr){
do
{
    cout<<ptr->data<<endl;
    ptr = ptr->next;
}while(ptr != first);
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    create(a,10);
    display(first);
    return 0;
}
