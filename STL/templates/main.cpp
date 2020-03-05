#include <iostream>

using namespace std;
template <class T>
T maxValue(T a, T b){
    if(a>b)
        return a;
    else
        return b;

}
int main()
{
    cout <<maxValue<int>(3,5)<< endl;
    cout <<maxValue(3.5,5.9)<< endl;
    cout <<maxValue<double>(3.5435443,3.5555555)<< endl;
    cout <<maxValue<string>("ab","ab")<< endl;

    return 0;
}
