#include <iostream>
using namespace std;
int add (int number1,int number2);


main ()
{
int number1;
int number2;
int total;
cout <<"Enter number1:";
cin >> number1;
cout << " Enter number2:";
cin >> number2;
total =  add (number1,number2);
cout << "total sum is :" << total << endl;
cout <<"program ends";


}
int add( int number1,int number2)
  {

int sum = number1+ number2;
return sum;
  }