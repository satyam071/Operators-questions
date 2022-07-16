#include<iostream>
using namespace std;

int main()
{ 
    int a;
    cin>>a;
    (((a+=8)/=3)%=5)*=5 ;
    cout<<a;
    return 0;
}