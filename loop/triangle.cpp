// #include <iostream>
// using namespace std;
// int main(){

//     for(int r=1 ; r<=5; ++r )
//     {
//         for(int c=1 ; c<=9 ; ++c)
//         {
//             if(c>=6-r && c<=4+r)
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<"\n";
//     }
// }

#include <iostream>
using namespace std;
 void triangle()
 {
    for(int r=1; r<=5; ++r)
    {
        for(int c=1; c<=9; ++c)
        {
            if(c>=6-r && c<=4+r)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
 }
 int main(){
    triangle();
 }