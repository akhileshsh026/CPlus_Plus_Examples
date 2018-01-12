#include <iostream>

using namespace std;

int * getrandom()
{
 static int r[] = {1,2,3}; // must be static
 return r;
}

int main()
{
    int *p;
    
    p = getrandom();
    
    for(int i=0;i<3;i++)
    {
       cout << *(p+i) << endl; 
    }
   return 0;
}
