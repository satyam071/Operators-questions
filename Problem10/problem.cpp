#include<iostream>
using namespace std;

int main()
{
    int f;
    cout<<"Enter your temperature in Farenheits:";
    cin>>f;
    float c=((f-32)*0.5556);
    cout<<"Your temperature(in celsius):"<<c;
    return 0;
}