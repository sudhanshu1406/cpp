#include <iostream>
using namespace std;
int main(){

    int a=0;
    int d=2;
    int n=5;
    int term=0;

    for(int i=1; i<n; i++)
    {
        term=a+i*d;
        cout<<term;
    }
}