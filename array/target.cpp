// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int target;
//     cout<<"enter your number\n";
//     cin>>target;
    
//     for(int i=0; i<5; ++i)
//     {
//         if(arr[i]==target)
//         {
//             cout<<"present";
//             break;
//         }
//         else
//         {
//             cout<<"not present";
//             break;
//         }
//     }
// }

#include <iostream>
using namespace std;
 void target(int arr[])
 {
    int target = 0;
    cout<<"enter your target\n";
    cin>>target;
    for(int i=0; i<5; ++i)
    {
        if(arr[i]!=target)
        {
            cout<<"not present";
            break;
        }
        else
        {
            cout<<"present";
            break;
        }
    }
 }
 int main(){
    int arr[] = {1,2,3,4,5};
    target(arr);
 }