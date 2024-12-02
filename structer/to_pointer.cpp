#include <iostream>
using namespace std;
struct info
{
    int rollno;
    char section;
    string name;
    float marks[5];
    
    void display(struct info a){
        cout<<a.rollno<<endl<<a.section<<endl<<a.name<<endl;
        for(int i=0; i<5; ++i)
        {
            cout<<a.marks[i];
        }
    }
};
int main() {
    info p= {1,'A',"sudhanshu",{1,2,3,4,5}};
    info *d = &p;
    d->display(p);
}