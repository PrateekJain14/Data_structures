#include <iostream>
#include <deque>
#include <vector>

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

    cout<<"=======================\n";
    cout<<"Queue size : "<<que.size()<<endl;
    cout<<"Queue max size : "<<que.max_size()<<endl;
    cout<<"Queue element at position : "<<que.at(2)<<endl;
    cout<<"Queue front : "<<que.front()<<endl;
    cout<<"Queue back : "<<que.back()<<endl;

    cout<<"=======================\n";
    que.pop_back();
    showQueue(que);
    cout<<"=======================\n";
    que.pop_front();
    showQueue(que);
    cout<<"=======================\n";
    deque<int> :: iterator it = que.begin();
    ++it;
    que.insert(it, 5);
    showQueue(que);
    cout<<"=======================\n";
    que.insert(it, 2,3);
    showQueue(que);
    cout<<"=======================\n";
    vector<int> vect(1,5);
    que.insert(it,vect.begin(),vect.end());
    showQueue(que);
    cout<<"=======================\n";
    return 0;
}
