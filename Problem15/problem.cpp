#include<iostream>
using namespace std;

int main()
{
    int a,first,second,third;
    a=123;
    first=a/100;
    a=a%100;
    second=a/10;
    a=a%10;
    third=a;
    cout<<third;
    cout<<second;
    cout<<first;
    return 0;
}