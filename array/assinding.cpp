#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    
    for(int i=0; i<4; ++i)
    {
        if(arr[i] > arr[i+1])
        {
            cout<<"not in assending order";
            break;
        }
        else
        {
            cout<<"assending order";
            break;
        }
    }
}