#include <iostream>
#include  <string>
using namespace std;

int main()
{
    char s[] = "How are you"; // or s[] = "Welcome"
    int vCount = 0,cCount=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            vCount++;
        else if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
            cCount++;
     }

    cout << "No. of vowels  :"<<vCount<< endl;
    cout << "No. of consonants  :"<<cCount<< endl;


    // count words
    int words=0;
    for(int i=0;s[i]!='\0';i++){
            if(s[i]== ' ' && s[i-1] != ' ')
            words++;
    }
    cout << "No. of words  :"<<words+1<< endl;

    return 0;
}
