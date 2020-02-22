#include <iostream>
#include <queue>

using namespace std;
void showQueue(queue<int> q)
{
    while(!q.empty())
    {
        cout  << q.front()<< '\t';
        q.pop();
    }
    cout << "\n=====================\n";

}
int main()
{
    queue<int> q;
    for(int i = 1 ; i <= 10 ; i++)
    {
        q.push(i*10);
    }
    showQueue(q);
    q.pop();
    showQueue(q);
    cout<<"Queue Front : "<<q.front()<<endl;
    cout<<"Queue Last : "<<q.back()<<endl;
    cout<<"Queue Size : "<<q.size()<<endl;

    return 0;
}
