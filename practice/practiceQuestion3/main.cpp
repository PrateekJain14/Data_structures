/*Given a string s which contains lower alphabetic characters, the task is to check if its possible to remove at most one character
 from this string in such a way that frequency of each distinct character becomes same in the string.*/

#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    //code
    int t;
    cin>>t;
    while(t--)
    {
        map<char,int> mp;
        string str;
        cin>>str;
        for(int i=0; i<str.length(); i++)
            mp[str[i]]++;
        set<int> st;
        multiset<int> mtset;
        for(map<char,int> :: iterator it = mp.begin(); it != mp.end(); it++)
        {
            st.insert(it->second);
            mtset.insert(it->second);
        }
        if(st.size() > 2)
        {
            cout<<0<<endl;
        }
        else if(st.size() == 2) //cxcwscd
        {
            map<int,int> countfreq;
            for(multiset<int> :: iterator i=mtset.begin(); i != mtset.end(); i++)
            {
                int val = *i;
                countfreq[val]++;
            }
            map<int,int> :: iterator itr = countfreq.begin();
            auto k = ++itr;
            itr = countfreq.begin();
            if(itr->first > k->first && k->second == 1)
            {
                cout<<1<<endl;
            }
            else if(k->first > itr->first && itr->second == 1)
            {
                cout<<1<<endl;
            }
            else if(abs(itr->first - k->first) == 1)
            {
                if(itr->first > k->first)
                {
                    if(itr->second == 1)
                    {
                        cout<<1<<endl;
                    }
                    else
                    {
                        cout<<0<<endl;
                    }
                }
                else
                {
                    if(k->second == 1)
                    {
                        cout<<1<<endl;
                    }
                    else
                    {
                        cout<<0<<endl;
                    }
                }
            }
            else
            {

                cout<<0<<endl;
            }

        }
        else
        {
            cout<<1<<endl;
        }


    }
    return 0;
}

