#include <iostream>

using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int val){
    q->size = val;
    q->front = q->rear = -1;
    q->Q = new int[q->size];
}

void enqueue(struct Queue *q, int val){
    if((q->rear+1)%q->size == q->front){
        cout<<"Queue is full";
    }
    else{
        q->rear = (q->rear+1)%q->size;
        q->Q[q->rear] = val;
    }
}

int dequeue(struct Queue *q){
    int x = -1;
    if(q->front == q->rear){
        cout<<"Queue is empty";
    }
    else{
        q->front = (q->front+1)%q->size;
        x = q->Q[q->front];
    }
    return x;
}

void display(struct Queue q){
    for(int i= q.front+1;i<=q.rear;i++){
        cout<<q.Q[i]<<"  ";
    }
    cout<<"\n";
}

int main()
{
    struct Queue q;
    create(&q,5);

    enqueue(&q,5);
     enqueue(&q,10);
      enqueue(&q,15);

    display(q);

    cout<<"Deleted element is :"<<dequeue(&q)<<"\n";

    display(q);
    return 0;
}
