#include <iostream>
using namespace std;
class student
{
    public:
    int a = 10;
    string name = "sudhanshu";
};
class coach:public student
{
    
};
class school:public student
{
    
};
int main() {
    coach b;
    school c;
    cout<<b.a;
    cout<<c.name;
}