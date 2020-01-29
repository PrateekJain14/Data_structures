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


int main()
{
    char *infix = "a+b*c-d";

    return 0;
}
