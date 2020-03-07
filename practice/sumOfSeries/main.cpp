// 1.2.3 + 2.3.4 + 3.4.5 + ...
#include <bits/stdc++.h>
using namespace std;

int sumofseries(int n)
{
    int res = 0;
    for (int i = 1; i <= n; i++)
        res += (i) * (i + 1) * (i + 2);
    return res;
}

// Driver Code
int main()
{
    cout << sumofseries(3) << endl;
    return 0;
}
