#include <iostream>

//Symmetric Matrix- a[i,j]=a[j,i]
// for storing it we can save either lower triangle matrix or upper and save it to save memory
using namespace std;

class UpperTriangle{
private:
    int n;
    int *a;
public:
    UpperTriangle(){
    this->n = 2;
    a = new int[2*(2+1)/2];
    }
    UpperTriangle(int n){
    this->n = n;
    a = new int[n*(n+1)/2];
    }
    ~UpperTriangle(){
    delete []a;
    }
    void set(int i,int j, int x);
    int get(int i, int j);
    void display();
};


void UpperTriangle :: set(int i, int j, int x){ // row major
    if(i<=j){
        a[(i-1)*n-(i-1)*(i-2)/2+j-i]=x;
    }
}

int UpperTriangle :: get(int i, int j){
    if(i<=j){
        return a[(i-1)*n-(i-1)*(i-2)/2+j-i];
    }
    return 0;
}

void UpperTriangle :: display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j) cout<<a[(i-1)*n-(i-1)*(i-2)/2+j-i]<<" ";
            else{
               int m = j;
               int k = i;
               cout<<a[(m-1)*n-(m-1)*(m-2)/2+k-m]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int d;

    cout<<"Enter Dimension :\n";
    cin>>d;
    UpperTriangle ut(d);
    int x;
    cout<<"Enter all the elements"<<endl;
    for(int i=1;i<=d;i++){
            for(int j=1;j<=d;j++){
            cin>>x;
            ut.set(i,j,x);
            }
    }
    ut.display();
    return 0;
}
