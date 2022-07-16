#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter 4 Digit Number:";
    cin>>num;

    if(num>999 && num<10000){
          cout<<(((num+8)/3) % 5)*5;
    }
    else{
        cout<<"Invalid";
    }

}