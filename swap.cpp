#include <iostream>
using namespace std;
int main(){
    
    int a=2;
    int b=4;
    int temp;

    temp=a;
    a=b;
    b=a;

    cout<<temp;
}