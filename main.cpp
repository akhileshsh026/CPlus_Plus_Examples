#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main () {

int bal[10]={1,2,3,4,5,6,7,8,9,10};

int *p;

p=bal;

 for ( int i = 0; i < 10; i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }
   cout << "Array values using balance as address " << endl;

   for ( int i = 0; i < 10; i++ ) {
      cout << "*(bal + " << i << ") : ";
      cout << *(bal + i) << endl;
   }

   return 0;

}
