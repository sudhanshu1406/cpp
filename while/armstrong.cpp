#include <iostream>
using namespace std;
int main(){
    
    int sum=0;
    int num=153;
    int newnum=num;
    int digit;
    while(num!=0)
    {
        digit=num%10;
        sum=sum+(digit*digit *digit);
        num=num/10;
    }
    if(newnum==sum)
    {
        cout<<"armstrong number";
    }
    else
    {
        cout<<"not";
    }
}