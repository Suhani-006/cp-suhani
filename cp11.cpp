#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    
    int l;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        int n,a,b;
        cin >> n >> a >> b;
        int dbl = n/2;
        int single = n%2;
        int dblcost = min(dbl*2*a,dbl*b);
        int singlecost = single*a;
        int total = singlecost + dblcost;
        cout<< total<<endl;
    }
}