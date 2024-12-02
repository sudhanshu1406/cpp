#include <iostream>
using namespace std;
int rowL(){

    for(int r=1 ; r<=5; ++r )
    {
        for(int c=1 ; c<=5 ; ++c)
        {
            if(c>=6-r)
            {
                cout<<r;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
int main(){
    rowL();
}