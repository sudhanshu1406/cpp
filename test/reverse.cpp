#include <iostream>
using namespace std;
void reverseing(string str)
{
    string strrev = str;
    int n = str.length();
    for(int i=0; i<n/2; ++i)
    {
        int temp=0;
        temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
    for(int i=0; i<n; ++i)
    {
        cout<<str[i];
    }

    cout<<endl;
    if(str==strrev)
    {
        cout<<"pallindrome";
    }
    else
    {
        cout<<"not a pallindrome";
    }
}
int main(){
    string str;
    cout<<"enter your word\n";
    cin>>str;
    reverseing(str);
}