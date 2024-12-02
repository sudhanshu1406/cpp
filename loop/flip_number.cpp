#include <iostream>
using namespace std;
int main() {
    int a=0;
    for(int r=1; r<=5; ++r)
    {
        a=r;
        for(int c=1; c<=5; ++c)
        {
            if(c>=6-r)
            {
                cout<<a++;
            }
            else
            {
                cout<<" ";
            }
          
        }
        cout<<"\n";
    }
}