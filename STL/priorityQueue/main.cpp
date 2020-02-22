#include <iostream>
#include <queue>

using namespace std;

void showQueue(priority_queue<int> q){
 while(!q.empty()){
    cout<<q.top()<<"\t";
    q.pop();
 }
 cout<<"\n==================================\n";
}

int main()
{
    priority_queue<int> pq;

    pq.push(30);
    pq.push(5);
    pq.push(10);
    pq.push(15);
    pq.push(20);

    showQueue(pq);

    pq.pop();
    pq.pop();
    showQueue(pq);

    cout<<"Queue size : "<<pq.size()<<endl;
    cout<<"Queue top : "<<pq.top()<<endl;
    return 0;
}
