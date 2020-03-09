#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//code
	int t;
	long size=0;
	cin>>t;
	while(t--){
	int flag = 0;
	cin>>size;
	long a[size],b[size];
	for(int i=0;i<size;i++){
	    cin>>a[i];
	}
	sort(a,a+size);
	for(int j=0;j<size;j++){
	    cin>>b[j];
	}
	sort(b,b+size);
	for(int j=0;j<size;j++){
	    if(a[j] != b[j]){
	        flag = 1;
	        break;
	    }
	}
	if(flag == 1){
	    cout<<"0\n";
	}
	else{
	    cout<<"1\n";
	}

	}
	return 0;
}

	// alternative use algorithm library and sort

	//code
/*	int t;
	long size=0;
	cin>>t;
	while(t--){
	int flag = 0;
	cin>>size;
	int a[size],b[size];
	for(int i=0;i<size;i++){
	    cin>>a[i];
	}
	sort(a,a+size);
	for(int j=0;j<size;j++){
	    cin>>b[j];
	}
	sort(b,b+size);
	for(int j=0;j<size;j++){
	    if(a[j] != b[j]){
	        flag = 1;
	        break;
	    }
	}
	if(flag == 1){
	    cout<<"0\n";
	}
	else{
	    cout<<"1\n";
	}

	}

}*/
