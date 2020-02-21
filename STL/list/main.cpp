#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void printList(list <int> li){
 list <int> :: iterator it;
 for(it = li.begin(); it != li.end(); it++){
    cout<<*it<<" ";
 }
 cout<<"\n";
}


int main()
{
    list<int> list1 , list2;

    for(int i=0;i<10;i++){
        list1.push_back(i*5);
        list2.push_front(i*7);
    }

    cout<<"LIST 1 : ";
    printList(list1);
    cout<<"LIST 2 : ";
    printList(list2);
    cout<<"-------------------------------------\n";
    list2.pop_back();
    list1.pop_front();

    cout<<"LIST 1 : ";
    printList(list1);
    cout<<"LIST 2 : ";
    printList(list2);
    cout<<"-------------------------------------\n";

    // reverse both list
    list1.reverse();
    list2.reverse();

    cout<<"LIST 1 : ";
    printList(list1);
    cout<<"LIST 2 : ";
    printList(list2);

    cout<<"-------------------------------------\n";
    list1.sort();
    cout<<"LIST 1 : ";
    printList(list1);
    cout<<"-------------------------------------\n";
    list<int> :: iterator i = list2.begin();
    advance(i,2);
    // advance is use to move iterator by x position
    // in this case i will start pointing at element on 3rd position
    //insert function will insert element at 3rd position thereby shifting all element to the right
    list2.insert(i,5);
    cout<<"LIST 2 : ";
    printList(list2);
    return 0;
}
