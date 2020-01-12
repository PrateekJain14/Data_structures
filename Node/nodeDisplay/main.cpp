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
int main()
{
    int a[]={1,3,5,7,9};
    create(a,5);
    display(first);
    cout<<"first    :"<<first->n;
    return 0;
}
