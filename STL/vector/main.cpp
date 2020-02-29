#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;

    v.assign(2,5);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }

    v.push_back(7);
    v.insert(v.begin(),1);

    cout<<endl<<v.at(0)<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<v.front();
    cout<<endl<<v.back();
    cout<<endl<<v.size();
    cout<<endl<<v.capacity();
    cout<<endl<<v.at(3);
    return 0;
}
