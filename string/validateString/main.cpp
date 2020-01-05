#include <iostream>
#include  <string>
using namespace std;

int valid(char *name){
for(int i=0;name[i]!='\0';i++){
        if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=65 && name[i]<=90) && !(name[i]>=65 && name[i]<=90))
        return 0;
     }
return 1;
}

int main()
{

    // only character and numbers are allowed
    char *name = "ani?321"; // or s[] = "Welcome"

    int val = valid(name);
    if(val){
        cout<<"Valid string\n";
    }
    else{
        cout<<"InValid string\n";
    }
    //cout << "No. of vowels  :"<<vCount<< endl;


    return 0;
}
