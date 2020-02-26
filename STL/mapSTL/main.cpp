#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, int> mp1;

    mp1.insert(pair<int,int>(1,10));
    mp1.insert(pair<int,int>(2,30));
    mp1.insert(pair<int,int>(3,20));
    mp1.insert(pair<int,int>(4,50));
    mp1.insert(pair<int,int>(5,40));
    mp1.insert(pair<int,int>(6,70));
    mp1.insert(pair<int,int>(7,60));
    mp1.insert(pair<int,int>(8,10));

    map<int,int> :: iterator it;

    cout<<"MAP 1 :\n";
    cout<<"\tKey\tValue\n";
    for(it = mp1.begin();it != mp1.end(); ++it){
        cout<<"\t"<<it->first<<"\t"<<it->second<<endl;
    }

    map<int, int> mp2(mp1.begin(), mp1.end());
    cout<<"MAP 2 :\n";
    cout<<"\tKey\tValue\n";
    for(it = mp2.begin();it != mp2.end(); ++it){
        cout<<"\t"<<it->first<<"\t"<<it->second<<endl;
    }

    mp2.erase(7);
    cout<<"MAP 2 :\n";
    cout<<"\tKey\tValue\n";
    for(it = mp2.begin();it != mp2.end(); ++it){
        cout<<"\t"<<it->first<<"\t"<<it->second<<endl;
    }

    mp2.erase(mp2.begin(),mp2.find(4));
    cout<<"MAP 2 :\n";
    cout<<"\tKey\tValue\n";
    for(it = mp2.begin();it != mp2.end(); ++it){
        cout<<"\t"<<it->first<<"\t"<<it->second<<endl;
    }
    return 0;
}
