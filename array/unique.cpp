#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,2,5};

    for(int i=0; i<5; ++i)
    {
        bool unique = true;
        for(int j=0; j<5; ++j)
        {
            if(i!=j && arr[i]==arr[j])
            {
                unique = false;
                break;
            }
        }
        if(unique)
        {
            cout<<arr[i];
        }
    }
}