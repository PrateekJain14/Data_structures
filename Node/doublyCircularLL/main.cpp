#include <iostream>

using namespace std;
struct Node{
int data;
struct Node *prev;
struct Node *next;
}*first=NULL;

int len(struct Node *ptr){
int len=0;
do
{
    len++;
    ptr = ptr->next;
}while(ptr != first);
return len;
}

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

void insert(struct Node *ptr,int pos, int ele){
    if(pos<0 || pos>len(ptr)){
        return;
    }
     struct Node *t;
     t = new Node;
     t->data = ele;
    if(pos==0){
        t->next = first;
        first->prev->next = t;
        t->prev = first->prev;
        first->prev = t;
        first = t;
    }
    else{
        for(int i=0;i<pos-1;i++)
            ptr = ptr->next;
        t->next = ptr->next;
        t->prev = ptr;
        ptr->next->prev = t;
        ptr->next = t;
    }
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
    cout<<"\n===========\n";
    insert(first,3,11);
    display(first);
    return 0;
}
