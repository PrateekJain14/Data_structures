/* You have records of employee name as string (Ename) and salary as positive integer (S). You have to sort the records on the basis
of employee salary, if salary is same then use employee name for comparison.*/


#include <iostream>
#include <cstring>

using namespace std;

struct employee
{
    string ename;
    int sal;
};

int main()
{
    //code
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        employee e[n];
        for(int i=0; i<n; i++)
            cin>>e[i].ename>>e[i].sal;

        for(int i=0; i<n-1; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                if(e[i].sal > e[j].sal)
                {
                    swap(e[i],e[j]);
                }
                else if(e[i].sal == e[j].sal)
                {
                    if( e[i].ename > e[j].ename )
                    {
                        swap(e[i],e[j]);
                    }
                }
            }
        }

        for(int i=0; i<n; i++)
            cout<<e[i].ename<<" "<<e[i].sal<<" ";
        cout<<endl;
    }
    return 0;
}
