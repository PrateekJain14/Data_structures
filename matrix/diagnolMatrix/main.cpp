#include <iostream>

// Diagonal matrix- A matrix whose all elements are zero other than it's diagonal.
// To store those element we store only diagonal elements to save space in a program
using namespace std;

class Diagonal{
private:
    int n;
    int *a;
public:
    Diagonal(int n){
    this->n = n;
    a = new int[n];
    }
    ~Diagonal(){
    delete []a;
    }
    void set(int i,int j, int x);
    int get(int i, int j);
    void display();
};


void Diagonal :: set(int i, int j, int x){
    if(i==j){
        a[i-1]=x;
    }
}

int Diagonal :: get(int i, int j){
    if(i==j){
        return a[i-1];
    }
    return 0;
}

void Diagonal :: display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) cout<<a[i-1];
            else cout<<"0";
        }
        cout<<endl;
    }
}
int main()
{
    Diagonal d(5);
    d.set(0,0,5);
    d.set(1,1,1);
    d.set(2,2,2);
    d.set(3,3,3);
    d.set(4,4,4);
    d.display();
    return 0;
}
