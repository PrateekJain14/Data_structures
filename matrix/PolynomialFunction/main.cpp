#include <iostream>

using namespace std;
class Elements{
  public:
    int coff;
    int expo;
};

class Polynomial{
  private:
    int n;
    Elements *ele;
  public:
    Polynomial(int n){
        this->n = n;
        ele =  new Elements[n];
    }
    ~Polynomial(){
        delete [] ele;
    }

    void create(){
        cout<<"Enter the elements coefficient and exponent power";
        for(int i=0;i<n;i++){
            cout<<"\nEnter "<<i+1<<" element\n";
            cout<<"coefficient  :";
            cin>>ele[i].coff;
            cout<<"\nexponent   :";
            cin>>ele[i].expo;
        }
    }
    void display(){
        for(int i=0;i<n;i++){
            cout<<ele[i].coff<<"x"<<ele[i].expo;
            if(i != n-1){
                cout<<"+";
            }
        }
    }

};


int main()
{
    int n;
    cout<<"\nEnter the number of non zero Elements :";
    cin>>n;
    Polynomial poly(n);
    poly.create();
    cout<<"\nEnter the number of non zero Elements for second polynomial:";
    cin>>n;
    Polynomial poly2(n);
    poly2.create();
    cout<<"Polynomial 1 :";
    poly.display();
    cout<<"Polynomial 2 :";
    poly2.display();



    return 0;
}
