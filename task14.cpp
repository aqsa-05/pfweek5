#include <iostream>
using namespace std;
string value1(int firstdigit);
string value2(int seconddigit);
main ()
{

string text1;
string text2;
int number;
cout <<"Enter number:";
cin >> number;
int firstdigit = number/10;
int seconddigit = number%10;
text1=value1(firstdigit);
text2 = value2(seconddigit);
cout <<text1<<text2;

}
string value1(int firstdigit)
{

if (firstdigit == 2)
{ return "twenty";
}
if (firstdigit == 3)
{ return "thirty";
}
if (firstdigit == 4)
{ return " fourty";
}
if (firstdigit == 5)
{ return "fifty";
}

if (firstdigit == 6)
{ return " sixty";
}
if (firstdigit == 7)
{return " seventy";
}
if (firstdigit == 8)
{ return " eighty";
}

if (firstdigit == 9)
{ return " 0";
}
}

string value2(int seconddigit)
{
if (seconddigit == 0 )
{ return "";
}
if (seconddigit == 1 )
{ return "one";
}
if (seconddigit == 2 )
{ return " two";
}
if (seconddigit == 3 )
{ return " three";
}
if (seconddigit == 4 )
{ return "four";
}
if (seconddigit == 5  )
{ return "five";
}
if (seconddigit ==  6 )
{ return "six";
}
if (seconddigit == 7  )
{ return" seven";
}
if (seconddigit == 8 )
{ return" eight";
}
if (seconddigit == 9  )
{ return " nine";
}
}