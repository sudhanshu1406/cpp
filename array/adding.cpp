// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int sum=0;
//     int arr2;
//     for(int i=0; i<5;i++)
//     {
//         sum=sum+i;
//         arr2=sum+arr[i];
//     }
//     cout<<arr2;
// }

#include <iostream>
using namespace std;
void sum(int arr[])
{
    int sum = 0;
    int arr2;
    for(int i=0; i<5; ++i)
    {
        sum = sum + i;
        arr2 = sum + arr[i];
    }
    cout<<arr2;
}
int main(){

    int arr[] = {1,2,3,4,5};
    sum(arr);
}