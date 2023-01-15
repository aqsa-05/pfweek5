#include <iostream>
using namespace std;
float divide (int number1,int number2);
int add(int number1,int number2);
int isGreater(int number1,int number);


main ()
{
int number1;
int number2;
int total;
int result;
int greater;
cout <<"Enter number1:";
cin >> number1;
cout << " Enter number2:";
cin >> number2;
total =  divide (number1,number2);
result = add(number1,number2);
cout << "total divide is :" << total << endl;
cout << "result is:" << result<< endl;
greater = isGreater(number1,number2);
cout << "greater is" << greater<< endl;
cout <<"program ends";


}
float divide( int number1,int number2)
  {

float division = number1/ number2;
return division;
  }
int add( int number1,int number2)
  {
int sum = number1 + number2;
return sum;
  }
int isGreater(int number1,int number2)
{  if (number1> number2)
  { return number1;}
  if (number2 > number1)
{return number2;
}
}

