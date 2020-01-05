#include <iostream>
#include<cstring>
using namespace std;
bool palindrom(char name[]){
    int len =strlen(name);
    for(int i=0,j=len-1;i<j;i++,j--){
        if(name[i]!=name[j])
        return false;
    }
    return true;
}

int main()
{
    char *p = "prateek";
    bool val = palindrom(p);
    if(val){
        cout<<p<<" is palindrome"<<endl;
    }
    else{
        cout<<p<<" is not a palindrome"<<endl;
    }
    char *q = "naman";
    val = palindrom(q);
    if(val){
        cout<<q<<" is palindrome";
    }
    else{
        cout<<q<<" is not a palindrome";
    }

    return 0;
}
