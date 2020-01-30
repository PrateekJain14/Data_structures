#include <iostream>

using namespace std;

struct Node{
    char data;
    struct Node *next;
}*top=NULL;

void push(int ele){
    struct Node *temp = new Node;
    if(!temp){
        cout<<"Overflow";
    }
    else{
        temp->data = ele;
        temp->next = top;
        top = temp;
    }
}

char pop(){
      struct Node *temp = new Node;
    if(!top){
        cout<<"Underflow";
        return -1;
    }
    else{
        temp = top;
        int ele = temp->data;
        top = top->next;
        delete temp;
        return ele;
    }
}


char stacktop(){
    if(top){
        return top->data;
    }
    else{
        return -1;
    }
}


int main()
{
    char *inf = "(a+b)+c*d^e";
    push('#');
    char *postfix = inftPos(inf);
    cout<<postfix;

    return 0;
}
