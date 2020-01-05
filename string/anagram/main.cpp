#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[] = "decimal";
    char b[] = "medical";
    int i;

    int asc[26]={0};

    for( i=0;a[i]!='\0';i++){
        asc[a[i]-97]++;
    }
    for( i=0;b[i]!='\0';i++){
        asc[b[i]-97]--;
        if(asc[b[i]-97]<0){
            cout<<"NOT ANAGRAM";
            break;
        }
    }
    if(b[i]=='\0'){
        cout<<" ANAGRAM";
    }


    return 0;
}
