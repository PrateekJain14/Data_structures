#include <iostream>
#include <deque>

using namespace std;

void showQueue(deque<int> q){
    for(deque<int> :: iterator it = q.begin();it != q.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
}
int main()
{
    deque <int> que;
    que.push_back(10);
    que.push_front(20);
    que.push_back(30);
    que.push_front(40);

    showQueue(que);
    return 0;
}
