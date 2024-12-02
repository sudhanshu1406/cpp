#include <iostream>
using namespace std;
struct info
{
    int rollno = 21;
    char section = 'A';
    string name = "sudhanshu";
    float marks[5] = {1,0,0,0,5};
    
    void display(){
    cout<<rollno<<endl<<section<<endl<<name<<endl;
    for(int i=0; i<5; ++i)
    {
        cout<<marks[i];
    }
    }
};
int main() {
    // p.display();
    info p;
    p.display();
}