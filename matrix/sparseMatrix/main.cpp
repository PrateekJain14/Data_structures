#include <iostream>

using namespace std;

class Element{
public:
    int i;
    int j;
    int x;
};

class SparseMatrix{
private: 
    int row;
    int col;
    int num;
    Element *ele;
public:
    SparseMatrix(int m, int n ,int num ){
        row = m;
        col = n;
        this->num = num;
        ele = new Element[this->num];
    }
    ~SparseMatrix( ){
        delete [] ele;
    }

    friend istream & operator>>(istream &is, SparseMatrix &s);
    friend ostream & operator<<(ostream &os, SparseMatrix &s);

    SparseMatrix operator+(SparseMatrix &s);

};
    istream & operator>>(istream &is, SparseMatrix &s){
        cout<<"\nEnter non-zero element :";
        for(int i=0;i<s.num;i++)
            cin>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
        return is;
    }

    ostream & operator<<(ostream &os, SparseMatrix &s){
        int k = 0;
     for(int i = 0;i< s.row; i++){
             for(int j = 0;j< s.col; j++){
                 if(s.ele[k].i == i && s.ele[k].j == j){
                    cout<<s.ele[k++].x<<" ";
                    }
                 else{
                    cout<<"0 ";
                     }
             }
             cout<<endl;
        }
       return os;
    }

SparseMatrix SparseMatrix::operator+(SparseMatrix &s)
{
 int i,j,k;
 if(row!=s.row || col!=s.col)
    return SparseMatrix(0,0,0);

 SparseMatrix *sum=new SparseMatrix(row,col,num+s.num);

 i=j=k=0;

 while(i<num && j<s.num)
 {
     if(ele[i].i<s.ele[j].i)
        sum->ele[k++]=ele[i++];
     else if(ele[i].i > s.ele[j].i)
        sum->ele[k++]=s.ele[j++];
     else
     {
         if(ele[i].j<s.ele[j].j)
            sum->ele[k++]=ele[i++];
         else if(ele[i].j > s.ele[j].j)
            sum->ele[k++]=s.ele[j++];
         else
         {
            sum->ele[k]=ele[i];
            sum->ele[k++].x=ele[i++].x+s.ele[j++].x;
         }
     }
 }
 for(;i<num;i++)sum->ele[k++]=ele[i];
 for(;j<s.num;j++)sum->ele[k++]=s.ele[j];
 sum->num=k;

 return *sum;

}

int main()
{
    SparseMatrix m1(5,5,5);
    SparseMatrix m2(5,5,5);

    cin>>m1;
    cin>>m2;

    SparseMatrix sum=m1+m2;

    cout<<"First Matrix"<<endl<<m1;
    cout<<"Second MAtrix"<<endl<<m2;
    cout<<"Sum Matrix"<<endl<<sum;

    return 0;
}
