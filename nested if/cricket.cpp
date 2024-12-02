#include <iostream>
using namespace std;
int main() {

    string str;
    cout<<"welcome to our wevsite crikbuzz\n";
    cout<<"sellect from the option\n domistic \n internationat \n league \n";
    cin>>str;

if(str=="domistic")
{
    cout<<"select from the option \nIND-A \nIND-B \nIND-C \n";
    cin>>str;

    if(str=="IND-A")
    {
        cout<<"seclect your second team\n";
        cin>>str;

        if(str=="IND-B")
        {
            cout<<"the team IND-A is winner";
        }
        else if(str=="IND-C")
        {
            cout<<"the team IND-C is winner";
        }
        else
        {
            cout<<"invalide option selected";
        }
    }
    else if(str=="IND-B")
    {
        cout<<"seclect your second team\n";
        cin>>str;

        if(str=="IND-C")
        {
            cout<<"the team IND-C is winner";
        }
        else
        {
            cout<<"invalide option selected";
        }
    }
    else
    {
        cout<<"invalide option selected";
    }

}
else if(str=="international")
{
    cout<<"select from the option \n IND \n PAK \n AUS \n";
    cin>>str;

    if(str=="IND")
    {
        cout<<"select your second team\n";
        cin>>str;

        if(str=="PAK")
        {
            cout<<"team IND is the winner";
        } 
        else if(str=="AUS")
        {
            cout<<"team IND is the winner";
        }
        else
        {
            cout<<"invalide option selected";
        }  
    }
    else if(str=="PAK")
    {
        cout<<"select your second team\n";
        cin>>str;

        if(str=="AUS")
        {
            cout<<"team AUS is the winner";
        }
        else
        {
            cout<<"invalide option selected";
        }
    }
}
else if(str=="league")
{
    cout<<"select from the option \n RCB \n CSK \n SRH \n";
    cin>>str;

    if(str=="RCB")
    {
        cout<<"select your second team\n";
        cin>>str;

        if(str=="CSK")
        {
            cout<<"team RCB is the winner";
        }
        else if(str=="SRH")
        {
            cout<<"team RCB is the winner";
        }
        else
        {
            cout<<"invalide option selected";
        }
    }
    else if(str=="CSK")
    {
        cout<<"select your second team\n";
        cin>>str;

        if(str=="SRH")
        {
            cout<<"team CSK is the winner";
        }
        else
        {
            cout<<"invalide option slected";
        }
    }
}
else
{
    cout<<"invalide option selected";
}
}