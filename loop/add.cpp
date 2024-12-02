// #include <iostream>
// using namespace std;
// int main(){

//     int temp=0;

//     for(int i=1; i<=10; ++i)
//     {
//         temp = temp + i;
//     }
//         cout<<temp;
// }


#include <iostream>
using namespace std;
int sum(int a)
{
    int temp = 0;
    for(int i=0; i<=a; ++i){
        temp = temp + i;
    }
    return temp;
}
int main()
{
    int a;
    cout<<"enter your range for addition\n";
    cin>>a;
    cout<<sum(a);
}