#include <iostream>
using namespace std;
int figo(int a){
    if(a<=1)
    {
        return a;
    }
    else
    {
        return figo(a-1)+figo(a-2);
    }
}
int main() {
    int a;
    cout<<"enter your number :\n";
    cin>>a;
    cout<<figo(a);
}