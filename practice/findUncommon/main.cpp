#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>

// Finding all the uncommon elements from two string

using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s1;
	    string s2;
	    cin>>s1;
	    cin>>s2;
	    map<char,int> mp;
	    set<char> st;
	    vector<char> uncommon;

	    // make map out of first string
	    for(int i=0;i<s1.length();i++){
	        if(mp.find(s1[i]) != mp.end()){
	            continue;
	        }
	        else{
	            mp.insert({s1[i],1});
	        }
	    }

	    // make set out of second string to find unique elements
	    for(int j=0;j<s2.length();j++){
	        st.insert(s2[j]);
	    }

	    // check if set element is present in map if not insert else delete the key
	    for(set<char> :: iterator itr = st.begin(); itr != st.end() ;itr++ ){
	         if(mp.find(*itr) != mp.end()){
	            mp.erase(mp.find(*itr));
	        }
	        else{
	            mp.insert({*itr,1});;
	        }
	    }

	    // insert all keys in vector and sort
	    for(map<char,int> :: iterator it = mp.begin(); it != mp.end();it++){
	        uncommon.push_back(it->first);
	    }
	    sort(uncommon.begin(),uncommon.end());
	    for (auto i = uncommon.begin(); i != uncommon.end(); ++i)
        cout << *i ;
	    cout<<endl;
	}
	return 0;
}
