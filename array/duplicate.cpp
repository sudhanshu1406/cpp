// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,2,5};
//     int n=5;
    
//     for(int i=0; i<n/2; ++i)
//     {
//         for(int j=1; j<5; ++j)
//         {
//             if(arr[i]==arr[j])
//             {
//                 cout<<arr[i];
//                 break;
//             }
//         }
//     }
// }

#include <iostream>
using namespace std;
void duplicate(int arr[])
{
    int n = 5;
    for(int i=0; i<n/2; ++i)
    {
        for(int j=1; i<5; ++i)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i];
                break;
            }
        }
    }
}
int main(){
    int arr[] = {1,2,3,2,5};
    duplicate(arr);
}