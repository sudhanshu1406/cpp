// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {11,12,13,14,15,54};
//     int large = arr[-1];
//     int sec_large = arr[-1];
    
//     for(int i=0; i<6; i++)
//     {
//         if(arr[i] > large)
//         {
//             large = arr[i];
//         }
//     }
//     cout<<"largest num = "<<large<<endl;

//     for(int i=0; i<6; ++i)
//     {
//         if(sec_large<arr[i] && arr[i]!=large)
//         {
//             sec_large = arr[i];
//         }
//     }
//     cout<<"second largest num = "<<sec_large;
// }

#include <iostream>
using namespace std;
void sec_largest(int arr[])
{
    int large = arr[0];
    int sec_large = arr[0];
    for(int i=0; i<5; ++i)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }
    }
    cout<<large<<endl;
    for(int i=0; i<5; ++i)
    {
        if(arr[i] > sec_large && arr[i] != large)
        {
            sec_large = arr[i];
        }
    }
    cout<<sec_large;
}
int main(){
    int arr[] = {1,23,34,55,67};
    sec_largest(arr);
}