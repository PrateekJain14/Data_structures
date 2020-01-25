#include <iostream>

using namespace std;

struct Node
{
    int coff;
    int pow;
    struct Node * next;
}*first=NULL;


int main()
{
    int nonz;
    struct Node  *last,*temp;

    cout<<"\nEnter Number of non Zero elements :";
    cin>>nonz;

    first = new Node;
    cout<<"\nEnter Coff :";
    cin>>first->coff;
    cout<<"\nEnter power :";
    cin>>first->pow;

    first->next = NULL;
    last = first;
    for(int i=1;i<nonz;i++){
    temp = new Node;
    cout<<"\nEnter Coff :";
    cin>>temp->coff;
    cout<<"\nEnter power :";
    cin>>temp->pow;

    temp->next = NULL;
    last->next = temp;
    last = temp;
    }

    temp = first;
    while(temp){
        cout<<temp->coff<<"x"<<temp->pow;
        temp = temp->next;
        if(temp) cout<<" + ";
    }


    return 0;
}
