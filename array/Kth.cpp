// #include <iostream>
// using namespace std;
// int main() {
// int arr[] = {19,20,21,22,23};
// int temp = 0;
// int n = 5;
// int kth;
// cout<<"enter how many largest term you want to know from this array\n" ;
// cin>>kth;
// for (int i=0; i<kth ; ++i)
// {
//         for(int j=i+1; j<5; ++j)
//     {
//         if(arr[j]>arr[i])
//         {
//             temp = arr[i];
//             arr[i] = arr[n-i-1];
//             arr[n-i-1] = temp;
//         }
//     }
// }
// cout<<arr[kth-1];
// }

#include <iostream>
using namespace std;
void kth(int arr[])
{
    int n = 5;
    int temp = 0;
    int kth_term;
    cout<<"enter how many largest term you want to know from this array\n" ;
    cin>>kth_term;
    for(int i=0; i<kth_term; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if(arr[j]>arr[i])
            {
                temp = arr[i];
                arr[i] = arr[n-i-1];
                arr[n-i-1] = temp;
            }
        }
    }
    cout<<arr[kth_term-1];
}
int main(){
    int arr[] = {1,2,3,4,5};
    kth(arr);
}