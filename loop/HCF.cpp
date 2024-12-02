// #include <iostream>
// using namespace std;
// int main() {
    
//     int HCF,larger,smaller;
//     cout<<"enter your two number\n";
//     cout<<"smaller value:\n";
//     cin>>smaller;
//     cout<<"larger value:\n";
//     cin>>larger;
    
//     if(smaller<larger)
//     {
//     for(int i=1; i<=smaller;i++)
//     {
//         if(smaller%i==0 && larger%i==0)
//         {
//             HCF=i;
//         }
//     }
//     cout<<"HCF of your numbers:"<<HCF<<endl;
//     }
//     else
//     {
//         cout<<"invalide input";
//     }
// }

#include <iostream>
using namespace std;
int sum(int small)
{
    int large;
    cin>>large;
    int a;
    if(small<large)
    {
        for(int i=1; i<=small; i++)
        {
            if(small%i==0 && large%i==0)
            {
                a=i;
            }
        }
    }
    else{
        cout<<"invalide inputs";
    }
    return a;
}
int main(){
    int small;
    cout<<"emter any two numbers firstly smaller then larger\n";
    cin>>small;
    cout<<sum(small);
}