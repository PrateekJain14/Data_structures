#include <iostream>

using namespace std;
// Toeplitz matrix-  matrix whose all diagonal elements are equal. To store it only first row and column is required
class matrix{
private:
    int *a;
    int m;
public:
    matrix(int m ){
        this->m = m;
        a = new int[2*m-1];
    }

    void create(int i ,int j, int x){
        if(i<=j){
            a[j-i] = x;
        }
        else{
            a[m+(i-j)] = x;
        }
    }

    void display(){
        for(int i = 1;i<= m; i++){
             for(int j = 1;j<= m; j++){
                 if(i<=j){
                    cout<<a[j-i]<<" ";
                    }
                 else{
                    cout<<a[m+(i-j)]<<" ";
                     }
             }
             cout<<endl;
        }
    }


};

int main()
{
    matrix m(3);
    m.create(1,1,2);
    m.create(1,2,3);
    m.create(1,3,4);
    m.create(2,1,5);
    m.create(3,1,6);
    m.display();

    return 0;
}
