#include <iostream>
#include <cmath>
using namespace std;

main()
{
int hour;
int totalHours;
int minute;
int minuteF;
int totaltime;
int result;
int totalMinutes;
cout <<"Enter hour:";
cin >> hour;
cout << "Enter minute:";
cin >> minute;
minuteF = minute+15;

if (minuteF>59)
{ totalMinutes = minuteF-59;
totalHours = hour +1;

if (hour == 24)
{ totalHours = 0;
}

cout << totalHours <<":" << totalMinutes;
}



if (minuteF<59)
{

  totalMinutes = minuteF;
  totalHours = hour;
if (hour == 24)
{  totalHours = 0;
}

cout << totalHours <<":" << totalMinutes;
}
}
 













 