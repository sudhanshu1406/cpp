#include <iostream>
using namespace std;
int main() {
int arr[] = {19,20,21,22,23};
int temp = 0;
int n = 5;
int kth;
cout<<"enter how many largest term you want to know from this array\n" ;
cin>>kth;
for (int i=0; i<kth ; ++i)
{
        for(int j=i+1; j<5; ++j)
    {
        if(arr[j]>arr[i])
        {
            temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-i-1] = temp;
        }
    }
}
cout<<arr[kth-1];
}