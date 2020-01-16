#include <iostream>

using namespace std;
struct Node{
int data;
struct Node * next;
}*first=NULL,*second=NULL,*third=NULL;

void create(int a[], int len){
struct Node *p,*last;
first = new Node;
first->data = a[0];
first->next = NULL;
last = first;
for(int i=1;i<len;i++){
    p = new Node;
    p->data = a[i];
    p->next = NULL;
    last->next = p;
    last = p;
}
}
void createAnother(int a[], int len){
struct Node *p,*last;
second = new Node;
second->data = a[0];
second->next = NULL;
last = second;
for(int i=1;i<len;i++){
    p = new Node;
    p->data = a[i];
    p->next = NULL;
    last->next = p;
    last = p;
}
}

void display(struct Node* ptr){
while(ptr != NULL){
    cout<<ptr->data<<endl;
    ptr = ptr->next;
}
}

void merge(){
struct Node *last;
if(first->data < second->data){
      third = last = first;
      first = first->next;
      last->next = NULL;
}
else{
     third = last = second;
     second = second->next;
     last->next = NULL;
}
while(first !=  NULL && second !=  NULL){
    if(first->data < second->data){
        last->next = first;
        last = first;
        first = first->next;
        last->next = NULL;
    }
    else{
        last->next = second;
        last = second;
        second = second->next;
        last->next = NULL;
    }
}
if(first != NULL){
    last->next = first;
}
else if(second != NULL){
    last->next = second;
}
}


int main()
{
    int a[] = {2,4,6,8,10};
    create(a,5);
    int b[] = {1,3,5};
    createAnother(b,3);
    display(first);
    cout<<"----------\n";
    display(second);
    cout<<"----------\n";
    merge();
    display(third);
    return 0;
}
