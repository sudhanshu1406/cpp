#include <iostream>
using namespace std;
int main() {
    int arr[] = {11,12,13,14,15,-55,54};
    int large = arr[-1];
    
    for(int i=0; i<7; i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }
    }
    cout<<"largest num = "<<large<<endl;
}