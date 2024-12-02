#include <iostream>
using namespace std;
int reverse(int n)
{
    int rv = 0;
    int d1;
    
    while(n>0)
    {
        rv = rv*10+n%10;
        n=n/10;
    }
    return rv;
}
int main(){
    int n = 123;
    cout<<reverse(n);
}