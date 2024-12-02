#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"choose your number from\n 2 \n 5 \n 11 \n";
    cin>>num;

switch(num)
{
    case 2:
    // cout<<"choose one\n double(2)\n cube(3)\n four(4)\n";
    cin>>num;
    switch(num%2==0) 
    {
    case 2: cout<<num*num;
    // break;
    case 3: cout<<num*num*num;
    // break;
    case 4: cout<<num*num*num*num;
    // break;

    default:cout<<"invalid selection";
    break;
    }
    break;

    case 5:
    // cout<<"choose one\n double(2)\n cube(3)\n four(4)\n";
    cin>>num;
    switch(num%5)
    {
    case 2: cout<<num*num;
    // break;
    case 3: cout<<num*num*num;
    // break;
    case 4: cout<<num*num*num*num;
    // break;

    default:cout<<"invalid selection";
    break;
    }
    break;


    case 11:
    // cout<<"choose one\n double(2)\n cube(3)\n four(4)\n";
    cin>>num;
    switch(num%11)
    {
    case 2: cout<<num*num;
    // break;
    case 3: cout<<num*num*num;
    // break;
    case 4: cout<<num*num*num*num;
    // break;

    default:cout<<"invalid selection";
    break;
    }
    break;


    default:cout<<"invalide selection";
    break;
}
}