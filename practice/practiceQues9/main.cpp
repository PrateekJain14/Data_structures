/*
A thief trying to escape from a jail has to cross N walls each with varying heights. He climbs X feet every time. But, due to
 the slippery nature of those walls, every times he slips back by Y feet.  Now the task is to calculate the total number of jumps
 required to cross all walls and escape from the jail.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains
three space separated integers X, Y, N. Then in the next line are N space separated values denoting the heights ( Ht[] ) of the walls.

Output:
For each test case in a new line print the total number of jumps.
*/

#include<iostream>
using namespace std;
int main()
{
    //code
    int t,x,y,n;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        int ht[n];
        int jump = 0;
        for(int i=0 ; i<n ; i++)
            cin>>ht[i];
        for(int i=0; i < n; i++)
        {
            int val = ht[i];
            cout<<val<<"  "<<x<<endl;
            if(val <= x)
            {
                jump++;
                continue;
            }
            while(val > x)
            {
                val = val - x;
                val = val + y;
                jump++;
            }
            jump++;
        }
        cout<<jump<<endl;
    }

    return 0;
}

/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	//code
	int t,x,y,n;
	cin>>t;
	while(t--){
	    cin>>x>>y>>n;
	    int ht[n];
	    int jump = 0;
	    int meanJump = x-y;
	    for(int i=0 ; i<n ; i++){
	        cin>>ht[i];
	        int val = ht[i];
	        if(val <= x){
	            jump++;
	         }
	        else{
	          val = val - x;
	          jump++;
	          if(val > 0 && meanJump>0){
	            float temp = ((float)val / (float)meanJump);
	            cout<<temp<<"  "<<ceil(temp)<<endl;
	            int add = ceil(temp);
	            jump += add ;
	          }

	        }
	    }
	    cout<<jump<<endl;
	}

	return 0;
}
*/

