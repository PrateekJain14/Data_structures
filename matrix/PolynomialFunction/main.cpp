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

    Polynomial * add(Polynomial *p){
        Polynomial *add;
        cout<<n<<p->n;
        if(n==0){
          return p;
        }
        else if(p->n == 0){
            return this;
        }
        else{
            int i = 0 , j = 0, k = 0;
            add = new Polynomial(n+p->n);
            while(i<n && j<p->n){
                if(ele[i].expo > p->ele[j].expo){
                    add->ele[k++] = ele[i++];
                }
                else if(ele[i].expo < p->ele[j].expo){
                    add->ele[k++] = p->ele[j++];
                }
                else{
                    add->ele[k].expo = ele[i].expo;
                    add->ele[k].coff = ele[i].coff + p->ele[j].coff;
                    k++;
                    i++;
                    j++;
                }
            }
            while(i<n)
                add->ele[k++] = ele[i++];
            while(j<p->n)
                add->ele[k++] = ele[j++];
            add->n = k;
            return add;
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
    Polynomial *p3 = poly.add(&poly2);
    cout<<"Polynomial 1 :";
    poly.display();
    cout<<"Polynomial 2 :";
    poly2.display();
    cout<<"Polynomial after adding :";
    p3->display();


    return 0;
}
