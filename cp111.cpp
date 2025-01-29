#include <iostream>
using namespace std;

int main()
{
    int l;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "1" << endl;

            cout << "1 2" << endl;
        }

        else if (n % 2 == 0)
        {
            cout << n / 2 << endl;
            for (int i = 1; i <= n / 2; i++)
            {
                cout << 1 + ((i - 1) * 3) << " " << 3 * n + ((i - 1) * (-3)) << endl;
            }
        }
        else
        {
            cout << (n + 1) / 2 << endl;
            for (int i = 1; i <= ((n + 1) / 2); i++)
            {
                cout << 1 + ((i - 1) * 3) << " " << 3 * n + ((i - 1) * (-3)) << endl;
            }
        }
    }
}