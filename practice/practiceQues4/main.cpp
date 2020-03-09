/* Given a string without spaces, a character, and a count, the task is to print the string after the specified character has occurred count number
of times.
Print “Empty string” incase of any unsatisfying conditions.
(Given character is not present, or present but less than given count, or given count completes on last index).
If given count is 0, then given character doesn’t matter, just print the whole string.*/


#include <iostream>
#include <map>
using namespace std;

int main()
{
    //code
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int count;
        char ch;
        cin>>s;
        cin>>ch;
        cin>>count;
        int len = s.length();
        map<char,int> mp;
        for(int i=0; i<len; i++)
            mp[s[i]]++;

        if(count == 0)
        {
            cout<<s<<endl;
        }
        else if((mp.find(ch) == mp.end()) || (count > mp[ch]) || (ch == s[len-1] && count ==  mp[ch] ))
        {
            cout<<"Empty string\n";
        }
        else
        {
            int ct=0;
            for(int j=0; j<len; j++)
            {
                if(s[j] == ch)
                {
                    ct++;
                    if(ct == count)
                    {
                        int k = j+1;
                        while(s[k] != '\0')
                        {
                            cout<<s[k++];
                        }
                        cout<<endl;
                        break;
                    }
                }
            }
        }

    }
    return 0;
}
