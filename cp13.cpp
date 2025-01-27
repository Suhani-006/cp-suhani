#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
        }
        if(sum>=0){
            cout<<sum<<endl;
        }
        else{
            sum=-sum;
            cout<<sum<<endl;
        }
    }
}