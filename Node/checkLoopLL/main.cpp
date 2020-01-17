#include <iostream>

using namespace std;

struct Node{
int n;
struct Node * next;
}*first=NULL;

void  create(int a[], int n){
struct Node *t, *last;
first = new Node;
first->n = a[0];
first->next = NULL;
last = first;

for(int i=1;i<n;i++){
    t = new Node;
    t->n = a[i];
    t->next = NULL;
    last->next = t;
    last = t;
}
}

void display(struct Node *newptr){
    while(newptr != NULL){
        cout<<newptr->n<<endl;
        newptr = newptr->next;
    }
}

//Display using recursion
void displayRecursive(struct Node *newptr){
    if(newptr != NULL){
        cout<<newptr->n<<endl;
        displayRecursive(newptr->next);
    }
}

int checkLoop(struct Node *ptr){
struct Node *p,*q;
p = q = ptr;
do{
    p = p->next;
    q = q->next;
    q = q? q->next:NULL;
}while(p && q && p!=q);
if(p==q){
    return 1;
}
else{
    return -1;
}
}



int main()
{
    struct Node *t1,*t2;
    int a[]={1,3,5,7,9};
    create(a,5);
    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;
    int val = checkLoop(first);
    if(val)
        cout<<"Loop in Link List";
    else
        cout<<"Linear Link List";


    return 0;
}
