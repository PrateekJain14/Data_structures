#include <iostream>

using namespace std;

struct Node
{
int data;
struct Node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x)
{
struct Node *t;
t= new Node;
if(t==NULL)
printf("Queue is FUll\n");
else
{
t->data=x;
t->next=NULL;
if(front==NULL)
front=rear=t;
else
{
rear->next=t;
rear=t;
}
}
}
