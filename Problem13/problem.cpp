#include<iostream>
using namespace std;

int main()
{
    int a,first,second,third,fourth;;
    a=5696;
    first=a/1000;
    a=a%1000;
    second=a/100;
    a=a%100;
    third=a/10;
    a=a%10;
    fourth=a;
    cout<<first+2<<second+2<<third+2<<fourth+2;
    return 0;
}