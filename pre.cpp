#include <iostream>
#include <cmath>
using namespace std;


main()
{
   float number1;
float number2;
float number;
float total;

cout << "Enter number:";
cin >> number1;
cout << "Enter number:";
cin >> number2;
 total = max(number1,number2);
 total = min (number1,number2);
cout << total << "is minimum number!!!" << endl;
cout << total <<" is greater number!!!" << endl;
total = sqrt(36);
cout << total<< "is square root!!! " << endl;
total = pow(3,5 );
cout << total << "is power!!" << endl;
total = cbrt(27);
cout <<"cube root is " << total << endl;
total = ceil(3.9);
cout << "ceiling " << total << endl;
total = floor (4.48);





}