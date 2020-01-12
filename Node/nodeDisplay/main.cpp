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

int countNode(struct Node *ptr){
    int count=0;
    while(ptr != NULL){
        count++;
        ptr = ptr->next;
    }
    return count;
}

int recursiveCount(struct Node *ptr){
    if(ptr == NULL){
        return 0;
    }
    else{
      return recursiveCount(ptr->next)+1;
    }
}

int sumNode(struct Node *ptr){
   int sum=0;
    while(ptr != NULL){
        sum += ptr->n;
        ptr = ptr->next;
    }
    return sum;
}

int maxNode(struct Node *ptr){
   int max= -32768;
    while(ptr != NULL){
        if(max < ptr->n)
            max = ptr->n;
        ptr = ptr->next;
    }
    return max;
}

int recursiveMax(struct Node *ptr){
   int x=0;
    if(ptr == 0){
        return INT_MIN;
    }
    else{
        x = recursiveMax(ptr->next);
        if(x > ptr->n )
            return x;
        else
            return ptr->n;
    }
}

int main()
{
    int a[]={1,3,5,7,9};
    create(a,5);
    display(first);
    cout<<"first    :"<<first->n<<endl;
    displayRecursive(first);
    cout<<"Total number of nodes    :"<<countNode(first)<<" Recursive   :"<<recursiveCount(first)<<endl;
    cout<<"Sum of nodes    :"<<sumNode(first)<<endl;
    cout<<"Max element in Link list    :"<<maxNode(first)<<" Recursive   :"<<recursiveMax(first)<<endl;

    return 0;
}
