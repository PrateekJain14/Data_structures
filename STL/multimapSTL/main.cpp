#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, int> mp1;

    mp1.insert({1,10});
    mp1.insert({2,30});
    mp1.insert({3,20});
    mp1.insert({4,50});
    mp1.insert({5,40});
    mp1.insert({6,70});
    mp1.insert({7,60});
    mp1.insert({7,10});

    multimap<int,int> :: iterator it;

    cout<<"MAP 1 :\n";
    cout<<"\tKey\tValue\n";
    for(it = mp1.begin();it != mp1.end(); ++it){
        cout<<"\t"<<it->first<<"\t"<<it->second<<endl;
    }

    multimap<int, int> mp2(mp1.begin(), mp1.end());
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

    cout << "\nmp1.lower_bound(5) : "
         << "\tKEY = ";
    cout << mp1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << mp1.lower_bound(5)->second << endl;
    cout << "mp1.upper_bound(5) : "
         << "\tKEY = ";
    cout << mp1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << mp1.upper_bound(5)->second << endl;
    return 0;
}
