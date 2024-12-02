// #include <iostream>
// using namespace std;
// int main() {
//     int a;
//     cout<<"enter your number:\n";
//     cin>>a;
//     int sum=0;
//     for(int i=1; i<a;++i)
//     {
//         if(a%i==0)
//         {
//             sum=sum+i;
//         }
//     }
//     if(a==sum)
//     {
//         cout<<"perfect number\n";
//     }
//     else
//     {
//         cout<<"not a perfect number\n";
//     }
// }

#include <iostream>
using namespace std;
int perfect(int b)
{
    int sum = 0;
    for(int i=1; i<b; ++i)
    {
        if(b%i==0)
        {
            sum = sum + i;
        }
    }
    if(b==sum)
    {
        cout<<"perfect number";
    }
    else
    {
        cout<<"not a perfect number";
    }
    return false;
}
int main()
{
    int a;
    cout<<"enter your number\n";
    cin>>a;
    cout<<perfect(a);
}
