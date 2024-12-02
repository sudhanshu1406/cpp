// #include <iostream>
// using namespace std;
// int main() {
//     int a;
//     int b;
//     cout<<"enter your number:\n";
//     cin>>a>>b;
//     int power=1;
//     for(int i=1; i<=b;++i)
//     {
//         power=power*a;
//     }
//     cout<<power;
// }

#include <iostream>
using namespace std;
int power(int a)
{
    int b;
    cin>>b;
    int power = 1;
    for(int i=1; i<=b; ++i)
    {
        power = power * a;
    }
    return power;
}
int main()
{
    int a;
    cout<<"enter firstly your number and then its power\n";
    cin>>a;
    cout<<power(a);
}