#include <iostream>

using namespace std;
struct Node{
struct Node * prev;
int data;
struct Node * next;
}*first=NULL;

void create(int a[], int len){
struct Node *p,*last;
first = new Node;
first->data = a[0];
first->next = NULL;
first->prev = NULL;
last = first;
for(int i=1;i<len;i++){
    p = new Node;
    p->data = a[i];
    p->next = last->next;
    p->prev = last;
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


int len(struct Node* ptr){
    int length = 0;
while(ptr != NULL){
    length++;
    ptr = ptr->next;
}
return length;
}


void reverse(struct Node *ptr){
 Node * temp;
 while(ptr != NULL){
    temp = ptr->next;
    ptr->next = ptr->prev;
    ptr->prev = temp;
    ptr = ptr->prev;
    if(ptr != NULL && ptr->next==NULL)
        first = ptr;
}
}


int main()
{
    int a[] = {2,4,6,8,10,20,30,33};
    create(a,8);
    cout<<"----------\n";
    display(first);
    cout<<"----------\n";
    reverse(first);
    display(first);
    cout<<"----------\n";
    return 0;
}
