#include <iostream>
using namespace std;
int main(){

    char ch;
    int asciivalue = (int)ch;

    for( ch='a'; ch<='z'; ++ch )
    {
        for(int asciivalue=65 ;asciivalue<=122; ++asciivalue)
        {
            cout<<"ascii value of "<<ch<<" is :"<<asciivalue<<endl;
        }
    }
}