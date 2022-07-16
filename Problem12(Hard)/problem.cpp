#include<iostream>
using namespace std;

int main()
{
    int a,first,second,third,fourth,fifth;
    a=12345;
    
    first=a/10000;//first=1 a=12345
    a=a%10000;//a=12345%10000=2345
    second=a/1000;//2345/1000=2
    a=a%1000;//2345%1000=345
    third=a/100;//345/100=3
    a=a%100;//45
    fourth=a/10;//45/10=4
    a=a%10;//5
    fifth=a;
    cout<<"The Sum Of First and Fourth Number IS:"<<first+fourth<<endl<<first<<endl<<second<<endl<<third<<endl<<fourth<<endl<<fifth<<endl;


    return 0;
}