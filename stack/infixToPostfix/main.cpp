 #include <iostream>
 #include<stdlib.h>
 #include<cstring>
using namespace std;

struct Node{
    char data;
    Node *next;
}*top = NULL;

bool isEmpty(){
    if(top == NULL){
        return true;
    }
    return false;
}

void push(char x){
  struct Node * temp = new Node;
  if(!temp){
      cout<<"Overflow";
  }
  else{
      temp->data = x;
      temp->next = top;
      top = temp;
  }
}

char pop(){
    if(isEmpty()){
        cout<<"\nUnderflow";
        return -1;
    }
    else{
        char ele = top->data;
        struct Node *temp = top;
        top = top->next;
        delete temp;
        return ele;
    }
}

void display(struct Node *temp){
    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

char stackTop(){
if(top){
    return top->data;
}
else{
    return -1;
}
}

int isOperand(char exp){
if(exp=='+'||exp=='/'||exp=='*'||exp=='-')
    return 0;
else
    return 1;
}

int pre(char exp){
if(exp=='+'||exp=='-')
    return 1;
else if(exp=='*'||exp=='/')
    return 2;
else
    return 0;
}

char * infixToPostfix(char *infix){
 char *postfix;
 int len = strlen(infix);
 postfix = new char[len+2];
 int i=0,j=0;
 while(infix[i]!='\0'){
    if(isOperand(infix[i])){
        postfix[j++]=infix[i++];
    }
    else{
        if(pre(infix[i])>pre(stackTop())){
            push(infix[i++]);
        }
        else{
            postfix[j++]=pop();
        }
    }
 }
 while(top!=NULL){
    postfix[j++]=pop();
 }
 postfix[j]='\0';
 return postfix;
}

int main()
{
    char *infix = "a+b*c-d";
    push('#');
    char *post = infixToPostfix(infix);
    cout<<post;
    return 0;
}
