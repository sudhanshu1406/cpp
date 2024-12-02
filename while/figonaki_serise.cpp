#include <iostream>
using namespace std;
int main(){
    
    int i;
    int t1=0,t2=1;
    int term=0;
    while(i<=10)
    {
        if(i==0)
        {
            cout<<i;
            i++;
            continue;
        }
        if(i==1)
        {
            cout<<i;
            i++;
            continue;
        }
        
        term=t1+t2;
        t1=t2;
        t2=term;
        cout<<term;
        i++;
    }
}