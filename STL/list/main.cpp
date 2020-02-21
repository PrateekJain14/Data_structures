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
    return 0;
}
