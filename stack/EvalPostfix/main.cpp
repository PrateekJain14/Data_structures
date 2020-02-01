#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
}*top=NULL;

void push(int ele)
{
    struct Node *temp = new Node;
    if(!temp)
    {
        cout<<"Overflow";
    }
    else
    {
        temp->data = ele;
        temp->next = top;
        top = temp;
    }
}

int pop()
{
    struct Node *temp = new Node;
    if(!top)
    {
        cout<<"Underflow";
        return -1;
    }
    else
    {
        temp = top;
        int ele = temp->data;
        top = top->next;
        delete temp;
        return ele;
    }
}


char stacktop()
{
    if(top)
    {
        return top->data;
    }
    else
    {
        return -1;
    }
}

int isOperand(char exp)
{
    if(exp == '+' || exp == '-' || exp == '*' || exp == '/' || exp == '^')
        return 0;
    else
        return 1;
}

int pre(char exp)
{
    if(exp == '^')
	{
		return(3);
	}
	else if(exp == '*' || exp == '/')
	{
		return(2);
	}
	else if(exp == '+' || exp == '-')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int eval(char *post)
{
  int x1,x2;
  for(int i=0;post[i]!='\0';i++){
    if(isOperand(post[i])){
        push(post[i]-'0');  // to make char into int
    }
    else{
        x1 = pop();
        x2 = pop();
        switch(post[i]){
        case '+': push(x2+x1); break;
        case '-': push(x2-x1); break;
        case '/': push(x2/x1); break;
        case '*': push(x2*x1); break;
        }
    }
  }
  return pop();
}

int main()
{
    char *post = "35*62/+4-";
    int val = eval(post);
    cout<<val;

    return 0;
}
