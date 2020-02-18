#include <iostream>

using namespace std;

struct Node
{
    int col;
    int data;
    struct Node * next;
};


int main()
{
    int row,col,nonz;
    cout<<"\nEnter number of rows :";
    cin>>row;
    cout<<"\nEnter total number of columns  :";
    cin>>col;

    // Sparse matrix create
    struct Node *A[row], *last,*temp;
    for(int i =0 ; i < row; i++)
    {
        cout<<"\nEnter Number of non Zero elements in "<<i+1<<" row :";
        cin>>nonz;
        last = NULL;
        if(nonz > 0)
        {
            A[i] = new Node;
            cout<<"\n Enter column number :";
            cin>>A[i]->col;
            cout<<"\n Enter data  :";
            cin>>A[i]->data;
            A[i]->next = NULL;
            last = A[i];
            if(nonz > 1)
            {
                for(int j=1; j<nonz; j++)
                {
                    temp = new Node;
                    cout<<"\n Enter column number :";
                    cin>>temp->col;
                    cout<<"\n Enter data  :";
                    cin>>temp->data;
                    last->next = temp;
                    temp->next = NULL;
                }
            }
        }
    }

    struct Node *ptr;

    for(int i=0;i<row;i++){
            ptr = A[i];
        for(int j=0;j<col;j++){
            if(j == ptr->col){
                cout<<ptr->data << " ";
                ptr = ptr->next? ptr->next:ptr;
            }
            else{
                cout<< "0 ";
            }
        }
        cout<<"\n";
    }


    return 0;
}
