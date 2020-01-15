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

void delDuplicate(struct Node* p){
struct Node *q,*temp ;
q = p->next;
while(q != NULL){
    if(p->data != q->data){
        p = q;
        q = q->next;
    }
    else{
      p->next = q->next;
      delete q;
      q = p->next;
    }
}
}


int main()
{
    int pos;
    int a[] = {10,15,15,25,30,30,35};
    create(a,7);
    display(first);
    cout<<"\n------------\n";
    delDuplicate(first);
    display(first);
    return 0;
}
