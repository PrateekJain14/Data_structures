#include <iostream>
#include <set>

// Set contain unique elements and no element is repeated.

using namespace std;

int main()
{
    multiset<int, greater<int> > st;
    // by default Multi set will store element in ascending order
    // but we can override that by passing second argument as above

    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);
    st.insert(50);
    st.insert(60);
    st.insert(60);
    st.insert(70);

    multiset<int, greater<int> > :: iterator it;
    cout<<"Set 1 : ";
    for(it = st.begin(); it != st.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<"\n=========================\n";


    return 0;
}
