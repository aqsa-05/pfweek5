#include <iostream>
using namespace std;
main ()
{
int length;
int width;
int height;
float formula;
float pyramidf;
float volume;
string unit  ;
int pyramidf1;

   
    

cout << "Enter unit";
cin >> unit;


   
cout <<"Enter length in meter:";
cin >> length;
cout <<"Enter width in meter";
cin >> width;
cout <<"Enter height in meter";
cin >> height;
formula = length* height*width;
pyramidf = formula/3;
cout <<" pyramidf" << pyramidf;




  if (unit ==" centimeter")
  {   pyramidf1 = pyramidf*1000000.0;
         }
if (unit == "kilometer ")
{pyramidf1 = pyramidf/100000000.0;
}
if (unit =="millimeter")
  { pyramidf1 = pyramidf*1000000000.0;
  }
cout << pyramidf1;








}