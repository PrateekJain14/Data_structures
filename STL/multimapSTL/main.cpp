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

    return 0;
}
