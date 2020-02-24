#include <iostream>
#include <set>

// Set contain unique elements and no element is repeated.

using namespace std;

int main()
{
    set<int, greater<int> > st;
    // by default set will store element in ascending order
    // but we can override that by passing second argument as above

    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);
    st.insert(50);
    st.insert(60);
    st.insert(60); // here set will store only one 60
    st.insert(70);

    set<int, greater<int> > :: iterator it;
    cout<<"Set 1 : ";
    for(it = st.begin(); it != st.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<"\n=========================\n";

    set<int> st1(st.begin(),st.end());
    cout<<"Set 2 : ";
    for(it = st1.begin(); it != st1.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<"\n=========================\n";

    st1.erase(st1.begin(),st1.find(30));  // it will delete all element before 30
    // to delete single element simply use st.erase(element_name);
    cout<<"Set 2 : ";
    for(it = st1.begin(); it != st1.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<"\n=========================\n";

    cout<<"Lower Bound Set 1 : "<<*st.lower_bound(20)<<endl;
    cout<<"Upper Bound Set 1 : "<<*st.upper_bound(20)<<endl;
    cout<<"Lower Bound Set 2 : "<<*st1.lower_bound(70)<<endl;
    cout<<"Upper Bound Set 2 : "<<*st1.lower_bound(70)<<endl;
    return 0;
}
