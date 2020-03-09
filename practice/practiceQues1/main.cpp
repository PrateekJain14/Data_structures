//The whitewalkers are here and the Great War is on. Each and every living being is giving their best to save the world from the dead. Arya fighting with full dedication found that whitewalkers need to be killed with a pattern or else they wont die. So that she can fight till the end of the war. She tried to understand the pattern. She kills every 'Xth' whitewalker by stabbing them 'N' times .
//Whitewalker approaching order (X)    Number of times-stabbing(N)
//1                                                                1
//2                                                                1
//3                                                                2
//This is the hint of the pattern that Arya needs to follow. Help Arya!



// pattern -- Ans is equal to number of set bits

#include <iostream>
using namespace std;

void printResult(int n){
    int ans=0;
    while(n>0){
        if(n % 2 == 1){
        ans++;
    }
    n /= 2;
    }
    cout<<ans<<endl;
}

int main() {
	//code
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    printResult(x);
	}
	return 0;
}
