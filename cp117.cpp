#include<iostream>
using namespace std;
int main(){
    int l;
    cin>>l;
    for(int i=0;i<l;i++){
        int x,a,b;
        cin>>a>>b;
        x=a|b;
        cout<< (a^x)+(b^x)<<endl;


    }
}