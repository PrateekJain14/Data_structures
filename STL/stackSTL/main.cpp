#include <iostream>
#include <stack>

using namespace std;

void showStack(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<"\t";
        st.pop();
    }
    cout<<"\n============================================\n";
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(30);
    st.push(20);
    st.push(5);
    st.push(15);

    showStack(st);

    cout<<"Stack size : "<<st.size()<<endl;
    cout<<"Stack top : "<<st.top();

    st.pop();
    cout<<"\n============================================\n";
    showStack(st);

    return 0;
}
