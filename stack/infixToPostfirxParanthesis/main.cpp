#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
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

char pop()
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

char *inftPos(char *inf)
{
    int i=0,j=0;
    int len = 0,x;
    char item;
    for(int k=0; inf[k]!='\0'; k++)
    {
        len++;
    }

    char *postf = new char[len+2];
    item=inf[i];
    while(item != '\0')
    {
        if(item == '('){
            push(item);
           }
       else if(isdigit(item) || isalpha(item)){
        postf[j++] = item;
       }
       else if(isOperand(item) != 1){
        x=pop();
			while(isOperand(x) != 1 && pre(x)>= pre(item))
			{
				postf[j] = x;
				j++;
				x = pop();
			}
			push(x);
			push(item);
       }
       else if(item == ')')
		{
			x = pop();
			while(x != '(')
			{
				postf[j] = x;
				j++;
				x = pop();
			}
		}
		i++;
		item = inf[i];
    }

    while(top != NULL)
    {
        postf[j++] = pop();
    }
    postf[j]='\0';
    return postf;
}

int main()
{
    char *inf = "A+(B*C-(D/E^F)*G)*H";
    push('#');
    char *postfix = inftPos(inf);
    cout<<postfix;

    return 0;
}
