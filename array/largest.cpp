// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {11,12,13,14,15,-55,54};
//     int large = arr[-1];
    
//     for(int i=0; i<7; i++)
//     {
//         if(arr[i] > large)
//         {
//             large = arr[i];
//         }
//     }
//     cout<<"largest num = "<<large<<endl;
// }

#include <iostream>
using namespace std;
void largest(int arr[])
{
    int large = arr[0];
    for(int i=1; i<6; ++i)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }
    }
    cout<<large;
}
int main(){
    int arr[] = {77,2,3,44,55,33};
    largest(arr);
}