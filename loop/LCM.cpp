#include <iostream>
using namespace std;
int main() {
    
    int LCM,larger,smaller;
    cout<<"enter your two number\n";
    cout<<"smaller value:\n";
    cin>>smaller;
    cout<<"larger value:\n";
    cin>>larger;
    
    for(int i=larger; ;i=i+larger)
    {
        if(i%larger==0 && i%smaller==0)
        {
            LCM=i;
            break;
        }
    }
    cout<<"LCM of your numbers:"<<LCM<<endl;
    
}