// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,2,1};
//     int n=5;
    
//     for(int i=0; i<n/2; ++i)
//     {
//         if(arr[i]!=arr[n-i-1])
//         {
//             cout<<"not palindrome";
//             break;
//         }
//         else
//         {
//             cout<<"palindrome";
//             break;
//         }
//     }   
// }

#include <iostream>
using namespace std;
void palindrome(int arr[])
{
    int n = 5;
    for(int i=0; i<n/2; ++i)
    {
        if(arr[i] != arr[n-i-1])
        {
            cout<<"not a palindrome";
            break;
        }
        else
        {
            cout<<"it is palindrome";
            break;
        }
    }
}
int main()
{
    int arr[] = {1,2,3,2,1};
    palindrome(arr);
}