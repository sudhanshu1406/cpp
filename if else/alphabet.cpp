// #include <iostream>
// using namespace std;
// int main(){

//     char ch;
//     cout<<"enter your character"<<endl;
//     cin>>ch;
// if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
// {
//     cout<<"alphabet";
// }
// else
// {
//     cout<<"not an alphabet";
// }
// }

// #include <iostream>
// using namespace std;
// int main() {

//     char value;
//     cout<<"enter your character"<<endl;
//     cin>>value;

// if(value=='a' || value=='e' || value=='i' || value=='o' || value=='u' || value=='A' || value=='E' || value=='I' || value=='O' || value=='U')
// {
//     cout<<"vowel";
// }
// else
// {
//     cout<<"consunent";
// }

// }

// #include <iostream>
// using namespace std;
// int main() {

//     char ch;
//     cout<<"enter your character\n";
//     cin>>ch;

// if(ch>='a' && ch<='z')
// {
//     cout<<"lowercase";
// }
// else if(ch>='A' && ch<='Z')
// {
//     cout<<"uppercase";
// }
// else
// {
//     cout<<"not uppercase/lowercase";
// }

// }

// #include <iostream>
// using namespace std;
// int main() {

//     int a;
//     cin>>a;

// if(a>=85 && a<=99)
// {
//     cout<<a;
// }
// else
// {
//     cout<<"none";
// }
// }

#include <iostream>
using namespace std;
int main() {

    int eng;
    int hindi;
    int maths;
    int marks;
    cout<<"enter your marks\n";
    cin>>eng>>hindi>>maths;
    marks=(eng+hindi+maths)/3;

if(marks>=40)
{
    cout<<"pass";
}
else
{
    cout<<"fail";
}

}