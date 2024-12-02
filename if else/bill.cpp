#include <iostream>
using namespace std;
int main(){

    float unit;
    cout<<"enter your unit\n";
    cin>>unit;

if(unit<=50)
{
    cout<<"pay $"<<unit*0.5;
}
else if(unit<=150)
{
    cout<<"pay $"<<50*0.5+(unit-50)*0.75;
}
else if(unit<250)
{
    cout<<"pay $"<<50*0.5+100*0.5+(unit-150)*1.2;
}
else
{
    cout<<"pay $"<<50*0.5+100*0.75+100*1.2+(unit-250)*1.5;
}
}


// #include <iostream>
// using namespace std;
// int main(){

//     int unit;
//     cout<<"enter your unit\n";
//     cin>>unit;

// if(unit<=50)
// {
//     cout<<"pay $"<<(unit*1)/2;
// }
// else if(unit<=150)
// {
//     cout<<"pay $"<<(50*1)/2+((unit-50)*3)/4;
// }
// else if(unit<250)
// {
//     cout<<"pay $"<<(50*1)/2+(100*3)/4+((unit-150)*12)/10;
// }
// else
// {
//     cout<<"pay $"<<(50*1)/2+(100*3)/4+(100*12)/10+((unit-250)*15)10;
// }
// }