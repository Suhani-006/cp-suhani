#include <iostream>
#include <math.h>
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

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr[i] = 1 << a;
        }

                sort(arr, arr + n);

        long long    count = 0;

        for (int k = 2; k < n; k++)
        {
            int i = 0;
            int j = k - 1;
            while (i < j)
            {
                if (arr[i] + arr[j] > arr[k])
                {
                    count += (j - i);
                    --j;
                }
                else
                {
                    ++i;
                }
            }
        }   
        cout << count << endl;
    }
}