#include <iostream>
#include  <string>
using namespace std;

int main()
{
    char s[] = "WELCOME"; // or s[] = "Welcome"
    int countChar = 0;
    for(int i=0;s[i]!='\0';i++){
        countChar++;
        s[i] = s[i] + 32;
     }

    cout << "String Length is :"<<countChar<< endl;
    cout << "String  is :"<<s<< endl;

    //toggle cases
    char a[] = "WeLcOmE"; // or s[] = "Welcome"
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>=65 && a[i]<=90){
            a[i] = (int)a[i] + 32;
        }
        else if(a[i]>=97 && a[i]<=122)
            a[i] = (int)a[i] - 32;


     }

    cout << "String  is :"<<a<< endl;



    return 0;
}
