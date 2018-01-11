#include<iostream>

extern int a=0;
using namespace std;

int main()
{

    cout<<"Enum types use";
    cout<< "defe the enumation enum enum-name { list of names } var-list; "<<endl;
    enum colours{red,green,blue,pine=5,apple} c;
    c=red;
    cout<< c<<endl;
    c=blue;
    cout<< c<<endl;
    c=apple;
    cout<< c<<endl;


    return 0;
}
