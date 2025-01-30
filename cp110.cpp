// #include <iostream>
// using namespace std;
// int main()
// {
//     int l;
//     cin >> l;
//     for (int i = 0; i < l; i++)
//     {
//         string s;
//         cin >> s;
//         int n = s.length();
//         int count = 1;
//         for (int i = 0; i < (n - 1); i++)
//         {
//             if (s[i] == '1' && s[i + 1] == '0')
//             {
//                 count++;
//             }
//         }
//         // cout << count << endl;
//         if ( count<=2)
//             {
//                 cout << count << endl;
//             }
//         else
//         {
//            int  count1 = 0;
//             for (int i = 0; i < (n - 1); i++)
//             {
//                 if ((s[i] == '1' && s[i + 1] == '0')||(s[i] == '0' && s[i + 1] == '1'))
//                 {
//                     count1++;
//                 }
//             }
//             cout << count1<< endl;
//         }
//     }
// }

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)

    {
        string s;
        cin >> s;

        int count = 1;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != s[i - 1])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << count << endl;
        }
        else if (count >= 2)

        {
            int x = 0;
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] == '0' && s[i + 1] == '1')
                {
                    x += 1;
                }
            }
            if (x >= 1) 
            {
                count = count - 1;
                cout << count << endl;
            }
            else
            {
                cout << count << endl;
            }
        }
        else
        {
            cout << count << endl;
        }
    }

    return 0;
}
