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
    cout << '\n';

}
int main()
{
    queue<int> q;
    for(int i = 1 ; i <= 10 ; i++)
    {
        q.push(i*10);
    }
    showQueue(q);
    return 0;
}
