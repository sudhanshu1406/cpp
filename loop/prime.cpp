#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"enter your number:\n";
    cin>>a;
    int increase=0;
    for(int i=1; i<=a;++a)
    {
        if(a%i==0)
        {
            ++increase;
        }
    }
    if(increase==2)
    {
        cout<<"prime number\n";
    }
    else
    {
        cout<<"not a prime number\n";
    }
}

// #include <iostream>
// using namespace std;
// int prime()
// {
      

// }