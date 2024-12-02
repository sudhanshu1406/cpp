#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int target;
    cout<<"enter your number\n";
    cin>>target;
    
    for(int i=0; i<5; ++i)
    {
        if(arr[i]==target)
        {
            cout<<target;
        }
        else
        {
            cout<<"not present";
            break;
        }
    }
}