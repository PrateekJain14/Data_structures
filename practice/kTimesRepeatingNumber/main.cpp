#include <iostream>
#include <map>
using namespace std;

int main() {
	//code
	int t,n,k;
	cin>>t;
	while(t--){
	    map<int,int> mp;
	    int flag = 0;
	    cin>>n>>k;
	    long a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        if(k == mp[a[i]]){
	            cout<<a[i]<<endl;
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 0){
	        cout<<-1<<"\n";
	    }

	}
	return 0;
}
