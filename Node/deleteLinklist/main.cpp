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

void del(struct Node *ptr,int loc){
struct Node *p;
if(ptr == NULL)
return;
if(loc == 1){
p = first;
first =  first->next;
delete p;
}
else{
for(int i=0;i<loc-1 && ptr;i++){
p = ptr;
ptr = ptr->next;
}
if(ptr){
p->next = ptr->next;
delete ptr;
}
}
}

int main()
{
    int pos;
    int a[] = {10,15,20,25,30};
    create(a,5);
    display(first);
    cout<<"\nEnter the node you want to delete  :";
    cin>>pos;
    del(first,pos);
    display(first);
    return 0;
}
