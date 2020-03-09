#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	//code
	int t;
	cin>> t;
	while(t--){
	    string str;
	    string patt;
	    cin>>str;
	    cin>>patt;
	    unordered_map<char,int> mp;
	    for(int i=0;i<patt.length();i++)
	    {
	        if(mp.find(patt[i]) != mp.end())
	            continue;
	       else
	           mp[patt[i]] = i;
	    }
	    int flag = 0;
	    long key = 10000;
	    for(long j=0;j<str.length();j++){
	        if(mp.find(str[j]) != mp.end()){
	            flag = 1;
	            key = j;
	            break;
	        }
	    }
	    if(flag == 1){
	        cout<<str[key]<<endl;
	    }
	    else{
	        cout<<"$\n";
	    }

	}
	return 0;
}
