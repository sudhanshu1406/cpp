#include <iostream>
using namespace std;
int main(){

    int path;
    cout<<"the route is from 1 to 4\n";
    cout<<"enter your location from 1 to 4\n";
    cin>>path;

if(path==1)
{
    cout<<"enter your location\n";
    cin>>path;

    if(path==2 || path==3)
    {
        cout<<"enter your location\n";
        cin>>path;

        if(path==4)
        {
            cout<<"destination reached";
        }
        else
        {
            cout<<"wrong path";
        }
    }
    else
    {
        cout<<"wrong path";
    }
}

else if(path==2)
{
    cout<<"enter your location\n";
    cin>>path;

        if(path==3)
        {
            cout<<"enter your location\n";
            cin>>path;

            if(path==4)
            {
                cout<<"destination reached";
            }   
            else
            {
                cout<<"wrong path";
            }
        }
        else
        {
            cout<<"wrong path";
        }
}

else if(path==3)
{
    cout<<"enter your location\n";
    cin>>path;

        if(path==4)
        {
            cout<<"destination reached";
        }
        else
        {
            cout<<"wrong path";
        }
}

else if(path==4)
{
    cout<<"you are already on your destination";
}
else
{
    cout<<"wrong path";
}
}