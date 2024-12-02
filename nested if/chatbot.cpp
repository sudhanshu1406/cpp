#include <iostream>
using namespace std;
int main(){

    string str;
    cout<<"enter your subject from the given options\n maths-science \n commerce \n arts \n";
    cin>>str;

if(str=="maths-science")
{
    cout<<"choose the degree you want from the given option \n B.tec \n BSC \n";
    cin>>str;

    if(str=="B.tec")
    {
        cout<<"choose your branch\n AI/ML \n data-science \n";
        cin>>str;

        if(str=="AI/ML")
        {
            cout<<"your fees for B.tec(AI/ML) is $1,30,000 per year.";
        }
        else if(str=="data science")
        {
            cout<<"your fees for B.tec(data-science) is $80,000 per year.";
        }
        else
        {
            cout<<"sorry we don't teach this branch in our college.";
        }
    }
    else if(str=="BSC")
    {
        cout<<"choose your branch\n plain \n agriculture \n";
        cin>>str;

        if(str=="plain")
        {
            cout<<"your fees for BSC(plain) is $40,000 per year.";
        }
        else if(str=="agriculture")
        {
            cout<<"your fees for BSC(agariculture) is $60,000 per year.";
        }
        else
        {
            cout<<"sorry we don't teach this branch in out college.";
        }
    }
    else
    {
        cout<<"sorry we don't teach this subject in our college.";
    }
}
else if(str=="commerce")
{
    cout<<"choose the degree you want from the given option\n BCA \n BBA \n";
    cin>>str;

    if(str=="BCA")
    {
        cout<<"choose your specialisation from the given option\n AI \n cyber-security \n";
        cin>>str;

        if(str=="AI")
        {
            cout<<"your fees for BCA(AI) is $1,00,000 per year.";
        }
        else if(str=="cyber-security")
        {
            cout<<"your fees for BCA(cyber-security) is $80,000 per year.";
        }
        else
        {
            cout<<"sorry we don't teach this spacialsation in out college.";
        }
    }
    else if(str=="BBA")
    {
        cout<<"choose your specialisation from the given option\n sports-management \n corporate-BBA \n";
        cin>>str;

        if(str=="sports-management")
        {
            cout<<"your fees for BBA(sports-management) is $90,000 per year.";
        }
        else if(str=="corporate-BBA")
        {
            cout<<"your fees for BBA(corporate-BBA) is $80,000 per year.";
        }
        else
        {
            cout<<"sorry we don't teach this spacialsation in out college.";
        }
    }
    else
    {
        cout<<"sorry we don't teach this subject in out college.";
    }
}
else if(str=="arts")
{
    cout<<"choose the degree you want from the given option\n B.com \n BA \n";
    cin>>str;

    if(str=="B.com")
    {
        cout<<"choose your branch from the given option\n marketing \n taxation \n";
        cin>>str;

        if(str=="marketing")
        {
            cout<<"your fees for B.com(marketing) is $30,000 per year.";
        }
        else if(str=="taxation")
        {
            cout<<"your fees for B.com(taxation) is $20,000 per year.";
        }
        else
        {
            cout<<"sorry we don't teach this branch in out college.";
        }
    }
    else if(str=="BA")
    {
        cout<<"choose your branch from the given option\n economics \n political-science \n";
        cin>>str;

        if(str=="economics")
        {
            cout<<"your fees for BA(economics) is $15,000 per year.";
        }
        else if(str=="political-science")
        {
            cout<<"your fees for BA(political-science) is $25,000 per year.";
        }
        else
        {
            cout<<"sorry we don't teach this branch in out college.";
        }
    }
    else
    {
        cout<<"sorry we don't teach this subject in out college.";
    }
}
else
{
    cout<<"sorry we don't have any info about your subject";
}
}