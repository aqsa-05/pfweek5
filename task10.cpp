#include <iostream>
#include <cmath>
using namespace std;
bool isSymmetrical(int number);
main()
{
int number;
bool f;

cout <<"Enter number:";
cin >> number;


f = isSymmetrical(number );
  if ( f == true)
   {
    cout  <<" symmetrical";
   }
   if ( f == false)
   {

    cout << "nonsymmetrical";
    }  
}


bool isSymmetrical(int number)

{ 


  
  
  
  

 int a = number/100;

 int c = number%10;

   if( a ==c)
   {
  return true;
   }

  if (a!= c)
    { 
 return false;
     }
return 0;
}










