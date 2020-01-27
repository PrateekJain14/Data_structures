#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
}*top=NULL;

void push(int ele){
    struct Node *temp;
    temp = new Node;
    if(!temp){
        cout<<"\nOverflow";
    }
    else{
        temp->data = ele;
        temp->next = top;
        top =temp;
    }
}

int pop(){
struct Node *temp;
if(top == NULL){
    cout<<"\nUnderflow";
    return -1;
}
else{
    temp = top;
    int ele = top->data;
    top = top->next;
    delete temp;
    return ele;
}
}

void disp(struct Node *p){
    while(p){
        cout<<p->data<<endl;
        p = p->next;
    }
}

int peek(){
if(top){
    return top->data;
}
return -1;
}

bool isEmpty(){
if(top == NULL){
    return true;
}
return false;
}

int main()
{
    cout<<"Stack Empty :"<<isEmpty()<<endl;
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    cout<<"----------------\n";
    disp(top);
    cout<<"\n----------------\n";
    cout<<pop()<<endl;
    cout<<"\n----------------\n";
    disp(top);
    cout<<"\n----------------\n";
    cout<<"Peek :"<<peek()<<endl;
    cout<<"----------------\n";
    cout<<"Stack Empty :"<<isEmpty()<<endl;
    return 0;
}
