#include <iostream>

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


int isBalanced(char *exp){
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{') push(exp[i]);
        else if(exp[i] == ')'|| exp[i] == ']' || exp[i] == '}'){
            if(top ==  NULL) return 0;
            char val = pop();
            if(exp[i] == ')' && val != '(') return 0;
            else if(exp[i] == ']' && val != '[') return 0;
            else if(exp[i] == '}' && val != '{') return 0;
        }
    }
    if(top ==  NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    char *exp = "[(a+b)*(c-d)]";
    cout<<isBalanced(exp);

    return 0;
}
