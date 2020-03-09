#include <iostream>
#include <map>
using namespace std;

int main() {
	//code
	int t,size,k;
	cin>>t;
	map<int,int> mp;
	while(t--){
	    int flag =0;
	    cin>>size>>k;
	    int a[size];
	    for(int i=0;i<size;i++){
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    for(int i=0;i<size;i++){
	        if(mp[a[i]] == k){
	            cout<<a[i]<<endl;
	            flag = 1;
	            break;
	        }
	    }
	    if(!flag){
	        cout<<"-1\n";
	    }

	}
	return 0;
}
