#include <iostream>
using namespace std;
int main() {
    int arr[] = {5,4,3,2,1};
    
    for(int i=0; i<4; ++i)
    {
        if(arr[i] < arr[i+1])
        {
            cout<<"not in desending order";
            break;
        }
        else
        {
            cout<<"desending order";
            break;
        }
    }
}