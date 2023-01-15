#include <iostream>
#include <cmath>
using namespace std;
int isOddish(int number);

main()
{
int y;
int number;
cout << "Enter number:";
cin >> number;
int sum;

 y = isOddish(number);
if (y%2 ==0)
{ cout <<"evenish";
}

if (y%2!= 0)
{
  cout << "oddish";
}



}

int isOddish(int number)
{
int sum ;
int a = number/10;
int e1= number%10;
int b = a/10;
int e2 = a%10;
int c = b/10;
int e3 = b%10;
int d = c/10;
int e4 = c%10;
int f = d/10;
int e5 = d%10;


 sum = e1 + e2+e3 + e4+e5;
cout << "sum";
cout << sum;

return sum;
return 0;

  
}    