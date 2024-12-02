// #include <iostream>
// using namespace std;
// int main() {

// for(int r=1 ; r<=5;++r)
// {
//     for(int c=1; c<=5;++c)
//     {
//         if(c>=r)
//         {
//             cout<<"*";
//         }
//         else
//         {
//             cout<<" ";
//         }
//     }
//     cout<<"\n";
// }
// }

#include <iostream>
using namespace std;
void invertL()
{
    for(int r=1; r<=5; ++r)
    {
        for(int c=1; c<=5; ++c)
        {
            if(c>=r)
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
    invertL();
}