#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,2,9};
    int n=5;
    
    for(int i=0; i<n/2; ++i)
    {
        if(arr[i]!=arr[n-i-1])
        {
            cout<<"not palindrome";
            break;
        }
        else
        {
            cout<<"palindrome";
            break;
        }
    }
    
}