#include <iostream>
using namespace std;
class school
{
    public:
    int a = 10;
};
class coach
{
    public:
    int b = 20;
};
class student:public school,public coach
{
    
};
int main() {
    student d;
    student c;
    cout<<d.a;
    cout<<c.b;
}