#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main () {

   int n[3][3]; // n is an array of 10 integers

   // initialize elements of array n to 0


   // output each array element's value
   for ( int j = 0; j < 3; j++ ) {
     for(int i=0;i<3;i++)
     {
           cin>>n[j][i];
     }
   }

    cout << "Row[0][0]" << setw( 13 ) << "Row[0][1]" << setw( 13 ) << "Row[0][2]" << endl;



   for ( int j = 0; j < 3; j++ )
    {
      for(int i=0;i<3;i++)
        {
           cout<<n[j][i]<<"\t";
        }
           cout<<endl;
    }

   return 0;

}
