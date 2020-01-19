#include <iostream>

using namespace std;

struct Node{
int n;
struct Node * next;
}*head=NULL;

void  create(int a[], int n){
struct Node *t, *last;
head = new Node;
head->n = a[0];
head->next = NULL;
last = head;

for(int i=1;i<n;i++){
    t = new Node;
    t->n = a[i];
    t->next = last->next;
    last->next = t;
    last = t;
}
}

void display(struct Node *newptr){
   do{
        cout<<newptr->n<<endl;
        newptr = newptr->next;
    }while(newptr != head);
}


int main()
{
    int a[]={1,3,5,7,9};
    create(a,5);

    display(head);



    return 0;
}
