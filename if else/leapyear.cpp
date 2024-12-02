// #include <iostream>
// using namespace std;
// int main() {

//     int year;
//     cout<<"enter your year"<<endl;
//     cin>>year;

// if ((year%4==0 && year%100!=0)||(year%400==0))
// {
//     cout<<"leap year";
// }
// else
// {
//     cout<<"not a leap year";
// }
// }

// #include <iostream>
// using namespace std;
// int main() {

//     int month;
//     cout<<"enter your month"<<endl;
//     cin>>month;

// if(month==1 || month==10 || month==12 || month==8 || month==3 || month==5 || month==7)
// {
//     cout<<"31st";
// }
// if(month==4 || month==6 || month==9 || month==11)
// {
//     cout<<"30th";
// }
// else
// {
//     cout<<"28/29";
// }

// }

#include <iostream>
using namespace std;
int main() {

    int day;
    cout<<"enter your day\n";
    cin>>day;

if(day==1)
{
    cout<<"monday";
}
else if(day==2)
{
    cout<<"tuesday";
}
else if(day==3)
{
    cout<<"wednesday";
}
else if(day==4)
{
    cout<<"thurshday";
}
else if(day==5)
{
    cout<<"friday";
}
else if(day==6)
{
    cout<<"saturday";
}
else
{
    cout<<"sunday";
}

}