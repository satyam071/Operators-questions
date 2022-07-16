#include<iostream>
using namespace std;

int main()
{
    int a,first,second,third;
    a=132;
    first=a/100;
    a=a%100;
    second=a/10;
    a=a%10;
    third=a;
    cout<<"The sum of three digits are:"<<first+second+third;
    return 0;
}