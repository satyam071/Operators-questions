#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter The value of x:";
    cin>>x;
    int y;
    int z;
    cout<<"Enter the value of y:";
    cin>>y;
    z=x;
    x=y;
    y=z;
    cout<<x<<"and"<<y;
    return 0;
}