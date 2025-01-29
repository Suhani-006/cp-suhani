#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int l;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            b[i] = arr[i];
        }
        sort(b, b + n);
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] % 2) == (b[i] % 2))
            {
            }
            else
            {
                ans = 0;

                break;
            }
        }
        if (ans == 1)
        {
            cout << "YES" << endl;
        }
        else if (ans == 0)
        {
            cout << "NO" << endl;
        }
    }
}