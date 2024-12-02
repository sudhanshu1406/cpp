#include <iostream>
#include <limits>
using namespace std;
int main() {

    cout<<"range of int:\n";
    cout<<numeric_limits<float>::min()<<endl;
    cout<<numeric_limits<float>::max()<<endl;

    cout<<"range of float:\n";
    cout<<numeric_limits<int>::min()<<endl;
    cout<<numeric_limits<int>::max()<<endl;

    cout<<"range of bool:\n";
    cout<<numeric_limits<bool>::min()<<endl;
    cout<<numeric_limits<bool>::max()<<endl;

    cout<<"range of char:\n";
    cout<<numeric_limits<char>::min()<<endl;
    cout<<numeric_limits<char>::max()<<endl;

    cout<<"range of double:\n";
    cout<<numeric_limits<double>::min()<<endl;
    cout<<numeric_limits<double>::max();
}