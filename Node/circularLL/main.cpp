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

void insert(int loc, int data){
     Node *p,*t;
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
    return 0;
}
