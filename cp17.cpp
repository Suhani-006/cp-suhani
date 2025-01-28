#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    
    int l;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        int n;
        cin>>n;
        int a;
        for(int i = 0; i < n; i++){
            cin>>a;
        }
        int x=10-n;
        int res=3*x*(x-1);
        cout<<res<<endl;
    }
}