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
    if(q->rear == q->size-1){
        cout<<"Queue is full";
    }
    else{
        q->Q[++q->rear] = val;
    }
}

int dequeue(struct Queue *q){
    int x = -1;
    if(q->front == q->rear){
        cout<<"Queue is empty";
    }
