#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	//code
	int t,size=0,i,j;
	cin>>t;
	unordered_map<int,int> mp;
	while(t--){
	cin>>size;
	int a[size] = {0};
	int b[size] = {0};
	for(i=0;i<size;i++){
	    cin>>a[i];
	}
	for(i=0;i<size;i++){
	    if(mp.find(a[i]) == mp.end()){
	        mp[a[i]] = 1;
	    }
	    else{
	        mp[a[i]]++;
	    }
	}
	for(j=0;j<size;j++){
	    cin>>b[j];
	}
	int flag = 0;
	for(int j=0;j<size;j++){
	    if(mp.find(b[j]) != mp.end()){
	        mp[b[j]]--;
	    }
	    else{
	        flag = 1;
	        break;
	    }
	}
	if(flag == 1){
	    cout<<"0"<<endl;
	}
	else{
	   	for(int j=0;j<size;j++){
           if(mp[b[j]] != 0) {
              flag = 1;
              break;
           }
      	}
      	if(flag == 1){
	            cout<<"0"<<endl;
	       }
	   else{
	            cout<<"1\n";
	        }
	}
	}

	return 0;
}
