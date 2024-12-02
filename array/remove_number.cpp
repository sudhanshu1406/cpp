#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,2,5};
    int target;
    cout<<"enter your number\n";
    cin>>target;
    int index=0;
    
    for(int i=0; i<5; ++i)
    {
        if(arr[i]!=target)
        {
            arr[index++]=arr[i];
            cout<<arr[i];
        }
    }
}