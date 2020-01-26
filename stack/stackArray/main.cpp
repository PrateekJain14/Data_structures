#include <iostream>

using namespace std;

struct stack{
int size;
int top;
int *s;
};

void push(struct *st,int ele){
if(st->top == st->size-1){
    cout<<"\nOverflow";
    return;
}

st->top++;
st->s[st->top] = ele;
}

int pop(struct *st){
if(st->top == -1){
    cout<<"\nUnderflow";
    return -1;
}
int ele = st->s[st->top];
st->top--;
return ele;
}

int peek(struct st,int pos){
if(st.top-pos+1 < 0){
    return -1;
}
return st.s[st.top-pos+1];
}

int stackTop(struct st){
if(st.top == -1){
    return -1;
}
return st.s[st.top];
}

bool isEmpty(stack st){
    if(st.top == -1){
        return true;
    }
    return false;
}

bool isFull(stack st){
    if(st.top == st.size-1){
        return true;
    }
    return false;
}

int main()
{
    struct stack st;
    cout<<"\nEnter size of stack :";
    cin>>st.size;
    st.s = new int[st.size];
    st.top = -1;

    push(st,2);
    return 0;
}
