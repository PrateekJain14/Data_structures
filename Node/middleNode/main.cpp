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

// Move p one node at a time and q two node at a time this way in single scan we can get middle element.
void middle(struct Node *ptr){
struct Node *p,*q;
p=q=ptr;
while(q){
    q = q->next;
    if(q) q = q->next;
    if(q) p = p->next;
}
cout<<p->data;
}


int main()
{
    int a[] = {2,4,6,8,10};
    create(a,5);
    display(first);
    cout<<"----------\n";
    middle(first);


    return 0;
}
