// #include <iostream>
// using namespace std;
// int sum (int a){
//     if(a<=1)
//     {
//         return 1;
//     }
//     else
//     {
//         return a+sum(a-1);
//     }
// }
// int main() {
//     int a = 10;
//     cout<<sum(a);
// }
// =====================================================
#include <iostream>
using namespace std;
int sum (int a){
    if(a<=1)
    {
        return 1;
    }
    else
    {
        return a+sum(a-1);
    }
}
int main() {
    int a;
    cout<<"enter your number :\n";
    cin>>a;
    cout<<sum(a);
}