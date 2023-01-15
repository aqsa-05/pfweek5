#include <iostream>
using namespace std;
main()
{
float neededHours;
float days;
float workers;
float totalHours;
float consumeH;
float hoursLeft;
float hoursCal;

cout <<"Enter neededHours:";
cin >> neededHours;
cout <<"Enter days:";
cin >> days;
cout <<"Enter workers:";
cin >> workers;
totalHours = days*workers*10;
cout << "totalHours"<< totalHours<<endl;
consumeH =( totalHours*10)/100;
hoursLeft = totalHours-consumeH;
cout <<" hoursLeft"<< hoursLeft<<  endl;
if ( hoursLeft>neededHours)
  {hoursCal= hoursLeft - neededHours;
 cout <<"yes!99 hours left" ;}                   
if (hoursLeft<neededHours)
{     hoursCal = neededHours-hoursLeft;
    cout <<" not enough time!72 hours needed";                     }
}




























  

 




