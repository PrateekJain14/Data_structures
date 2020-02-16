#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[] = "findings";

    // using hash table as here all the char are between 97 to 122
    int asc[26]={0};
    for(int i=0;a[i]!='\0';i++){
        asc[a[i]-97]++;
    }
    for(int j=0;j<=25;j++){
        if(asc[j]>1){
            cout<<(char)(j+97)<<" is repeated :"<<asc[j]<<"times\n";
        }
    }

    return 0;
}
