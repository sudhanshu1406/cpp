#include <iostream>
using namespace std;
int columnL(){

    for(int r=1 ; r<=5; ++r )
    {
        for(int c=1 ; c<=5 ; ++c)
        {
            if(c>=6-r)
            {
                cout<< c;
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
    columnL();
}