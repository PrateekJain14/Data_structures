#include <iostream>

//Lower Triangular Matrix- A matrix whose all the elements other then lower left triangle are zero.

using namespace std;

class LowerTriangle{
private:
    int n;
    int *a;
public:
    LowerTriangle(){
    this->n = 2;
    a = new int[2*(2+1)/2];
    }
    LowerTriangle(int n){
    this->n = n;
    a = new int[n*(n+1)/2];
    }
    ~LowerTriangle(){
    delete []a;
    }
    void set(int i,int j, int x);
    int get(int i, int j);
    void display();
};


void LowerTriangle :: set(int i, int j, int x){ // row major
    if(i>=j){
        a[i*(i-1)/2+j-1]=x;

        // a[n*(j-1)+(j-2)(j-1)/2+i-j]  ---> column major formula
    }
}

int LowerTriangle :: get(int i, int j){
    if(i>=j){
        return a[i*(i-1)/2+j-1];
    }
    return 0;
}

void LowerTriangle :: display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j) cout<<a[i*(i-1)/2+j-1]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
    int d;

    cout<<"Enter Dimension :\n";
    cin>>d;
    LowerTriangle lt(d);
    int x;
    cout<<"Enter all the elements "<<endl;
    for(int i=1;i<=d;i++){
            for(int j=1;j<=d;j++){
            cin>>x;
            lt.set(i,j,x);
            }
    }
    lt.display();
    return 0;
}
