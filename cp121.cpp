#include <iostream>
using namespace std;
bool part(int n, int m)
{
    if (m == n)
    {
        return true;
    }
    else if (n % 3 != 0 || n < m)
    {
        return false;
    }
    else
    {
        int x, y;
        x = n / 3;
        y = (2 * n) / 3;
        return part(x, m) || part(y, m);
    }
}
int main()
{
    int l;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        int m, n;
        cin >> n >> m;
    
        
        if (part(n, m))
        {
            cout << "yes"<<endl;
        }
        else
        {
            cout << "no"<<endl;
        }
    }
}