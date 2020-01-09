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
