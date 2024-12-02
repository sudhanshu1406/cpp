#include <iostream>
using namespace std;
int main(){

    int path;
    cout<<"the route is from 1 to 6\n";
    cout<<"enter your location from 1 to 6\n";
    cin>>path;

if(path==1)
{
    cout<<"there is two paths 2 and 3\n";
    cout<<"enter your path\n";
    cin>>path;

    if(path==2)
    {
        cout<<"there is only one path which is 4\n";
        cout<<"enter your path\n";
        cin>>path;

        if(path==4)
        {
            cout<<"there is two paths 3 and 6\n";
            cout<<"enter your path\n";
            cin>>path;

            if(path==3)
            {
                cout<<"there is only one path which is 5\n";
                cout<<"enter your path\n";
                cin>>path;

                if(path==5)
                {
                    cout<<"there is only one path which is 6\n";
                    cout<<"enter your path\n";
                    cin>>path;

                    if(path==6)
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

            else if(path==6)
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
        cout<<"there is two paths 4 and 5\n";
        cout<<"enter your path\n";
        cin>>path;

        if(path==4)
        {
            cout<<"enter your path\n";
            cin>>path;

            if(path==6)
            {
                cout<<"destination reached";
            }
            else
            {
                cout<<"wrong path";
            }
        }

        else if(path==5)
        {
            cout<<"there is only one path which is 6\n";
            cout<<"enter your path\n";
            cin>>path;

            if(path==6)
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
    else
    {
        cout<<"wrong path";
    }
}

else if(path==2)
{
    cout<<"there is only one path which is 4\n";
    cout<<"enter your path\n";
    cin>>path;

    if(path==4)
    {
        cout<<"there is two paths 3 and 6\n";
        cout<<"enter your path\n";
        cin>>path;

        if(path==6)
        {
            cout<<"destination reached";
        }

        else if(path==3)
        {
            cout<<"there is olny one path which is 5\n";
            cout<<"enter your patth\n";
            cin>>path;

            if(path==5)
            {
                cout<<"there is only one path which is 6\n";
                cout<<"enter your path\n";
                cin>>path;

                if(path==6)
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
        else
        {
            cout<<"wrong path";
        }
    }    
}

else if(path==3)
{
    cout<<"there is two paths 4 and 5\n";
    cout<<"enter your path\n";
    cin>>path;

    if(path==4)
    {
        cout<<"there is only one path which is 6\n";
        cout<<"enter your path\n";
        cin>>path;

        if(path==6)
        {
            cout<<"destination reached";
        }
        else
        {
            cout<<"wrong path";
        }
    }

    else if(path==5)
    {
        cout<<"there is only one path which is 6\n";
        cout<<"enter your path\n";
        cin>>path;

        if(path==6)
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

else if(path==6)
{
    cout<<"you are already on your destination";
}
else
{
    cout<<"wrong path";
}
} 