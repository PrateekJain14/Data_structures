#include <iostream>
#include  <string>
#include <cctype>
using namespace std;

void reverseString(char name[],int length){ // if taken pointer then string becomes immutable
    int i,j;
    char t;
for(i=0,j=length-1;i<j;i++,j--){
        t= name[i];
        name[i]= name[j];
        name[j]= t;
     }
}

int main()
{

    // only character and numbers are allowed
    char name[] = "pythons";
    int countChar=0;
    for(int i=0;name[i]!='\0';i++){
        countChar++;
     }
    reverseString(name,countChar);
    cout<<name;
    //cout << "No. of vowels  :"<<vCount<< endl;


    return 0;
}
