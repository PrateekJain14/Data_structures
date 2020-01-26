#include <iostream>

using namespace std;

struct stack
{
    int size;
    int top;
    int *s;
};

void push(struct stack *st,int ele)
{
    if(st->top == st->size-1)
    {
        cout<<"\nOverflow";
    }
    else
    {
        st->top++;
        st->s[st->top] = ele;
    }

}

int pop(struct stack *st)
{
    if(st->top == -1)
    {
        cout<<"\nUnderflow";
        return -1;
    }
    int ele = st->s[st->top];
    st->top--;
    return ele;
}

int peek(struct stack st,int pos)
{
    if(st.top-pos+1 < 0)
    {
        return -1;
    }
    return st.s[st.top-pos+1];
}

int stackTop(struct stack st)
{
    if(st.top == -1)
    {
        return -1;
    }
    return st.s[st.top];
}

bool isEmpty(struct stack st)
{
    if(st.top == -1)
    {
        return true;
    }
    return false;
}

bool isFull(struct stack st)
{
    if(st.top == st.size-1)
    {
        return true;
    }
    return false;
}

void disp(struct stack st)
{
    for(int i=st.top; i>=0; i--)
    {
        cout<<"\n"<<st.s[i];
    }
}

int main()
{
    struct stack st;
    cout<<"\nEnter size of stack :";
    cin>>st.size;
    st.s = new int[st.size];
    st.top = -1;

    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    push(&st,60);
    push(&st,70);
    disp(st);
    cout<<"\n---------------\n";
    cout<<"Peek :"<<peek(st,2)<<endl;
    cout<<"Pop :"<<pop(&st)<<endl;
    return 0;
}
