#include <iostream>
using namespace std;
main()
{
int vehiclep;
char vehicleC;
float taxamount;
float formula;
float finalprice;
float taxRateP;
float rp;
cout <<" Enter vehiclep:";
cin >> vehiclep;
cout << "Enter vehicleC";
cin >> vehicleC;
if (vehicleC== 'M')
{  taxRateP = 6 ;   }
if (vehicleC == 'E')
{  taxRateP = 8 ;    }
if (vehicleC == 'S')
{ taxRateP = 10;}
if (vehicleC == 'V')
{  taxRateP = 12;}
if (vehicleC== 'T')
{ taxRateP = 15;}
rp = taxRateP/100;
taxamount = vehiclep*rp;
cout << "taxamount"<< taxamount << endl;
finalprice = vehiclep+taxamount;
cout <<"finalprice"<< finalprice<< endl;
}








  

 




