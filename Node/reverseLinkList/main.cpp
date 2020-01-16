#include <iostream>

using namespace std;
struct Node{
int data;
struct Node * next;
}*first=NULL;

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

void display(struct Node* ptr){
while(ptr != NULL){
    cout<<ptr->data<<endl;
    ptr = ptr->next;
}
}

void reverse(struct Node *p){
struct Node *q , *r;
q = NULL;
r = NULL;
while(p !=  NULL){
    r = q;
    q = p;
    p = p->next;
    q->next = r;
}
first = q;
}

void recursivereverse(){
}

int main()
{
    int a[] = {2,4,6,8,10};
    create(a,5);
    display(first);
    cout<<"----------\n";
    reverse(first);
    display(first);

    return 0;
}
