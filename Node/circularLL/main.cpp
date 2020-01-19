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
head->next = head;
last = head;

for(int i=1;i<n;i++){
    t = new Node;
    t->n = a[i];
    t->next = last->next;
    last->next = t;
    last = t;
}
}

int length(struct Node *newptr){
    int len = 0;
    do{
        len++;
        newptr = newptr->next;
    }while(newptr != head);
    return len;
}

void insert(int loc, int data){
     Node *p,*t;
     if(loc < 0 || loc > length(head)){
        return;
     }

     if(loc == 0){
        t = new Node;
        t->n = data;
        if(head == NULL){
            head = t;
            head->next =head;
        }
        else{
            p = head;
            while(p->next != head){
                p = p->next;
            }
            p->next = t;
            t->next = head;
            head = t;
        }
     }
     else{
         p = head;
         for(int i = 0;i<loc - 1;i++)
            p = p->next;
         t = new Node;
         t->n = data;
         t->next = p->next;
         p->next = t ;
     }

}

int del(int pos){
 Node *p,*q;
 int x;
 if(pos < 0 || pos > length(head)){
        return -1;
 }
 if(pos == 1){
    while(p->next != head){
        p = p->next;
    }
    x = head->n;
    if(head == p){
        delete head;
        head = NULL;
    }
    else{
        p->next = head->next;
        delete head;
        head = p->next;
    }
 }
 else{
    p = head;
    for(int i = 0;i<pos - 2;i++)
            p = p->next;
    q = p->next;
    p->next = q->next;
    x = q->n;
    delete q;
 }
 return x;
}

void display(struct Node *newptr){
   do{
        cout<<newptr->n<<endl;
        newptr = newptr->next;
    }while(newptr != head);
}

void Rdisplay(struct Node *newptr){
  static int flag = 0;
    if(newptr != head || flag==0){
        flag =1;
        cout<<newptr->n<<endl;
       Rdisplay(newptr->next);
    }
}


int main()
{
    int a[]={1,3,5,7,9};
    create(a,5);

    display(head);
    cout<<"\n============\n";
    insert(0,2);
    insert(3,4);
    Rdisplay(head);
    cout<<"\n============\n";
    cout<<"deleted element  :"<<del(1)<<endl;
    cout<<"deleted element  :"<<del(3)<<endl;
    display(head);
    return 0;
}
