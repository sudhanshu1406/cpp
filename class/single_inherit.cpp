#include <iostream>
using namespace std;
class school
{
    public:
    int a = 10;
};
class student:public school
{
    
};
int main() {
    student b;
    cout<<b.a;
}