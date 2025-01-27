#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    
    int l;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        int m,n;
        cin >> n>>m;
        if(n%m == 0){
            cout << "YES"<<endl;
        }else{
            cout<< "NO"<<endl;
        }
    }
}