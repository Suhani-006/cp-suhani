#include <iostream>
using namespace std;

int main()
{
    int l;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
      

        if(y2-y1==0&&(y3-y1)<0){
            cout<< abs(x2-x1)<<endl;
        }
        else if(y3-y2==0&&(y1-y2)<0){
            cout<<abs(x3-x2)<<endl;
        }
        else if(y1-y3==0&&(y2-y3)<0){
            cout<< abs(x1-x3)<<endl;
        }else{
           cout<<  0<<endl;
        }
    }
}