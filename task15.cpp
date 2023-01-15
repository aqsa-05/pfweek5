#include <iostream>
#include <cmath>
using namespace std;
main ()
{
float poolvolume;
float flowRatep1;
float flowRatep2;
int hours;
float totalVolume;
float fpcont;
float lpcont;
float overflow;
float overflowh;
float totalVolumep;

cout <<"Enter poolvolume:";
cin >> poolvolume;

cout <<"Enter flowRatep1:";
cin >> flowRatep1;
cout <<"Enter flowRatep2:";
cin >> flowRatep2;
cout <<"Enter hours:";
cin >> hours;

fpcont = (flowRatep1*hours);
cout <<"fpcont" << fpcont;
lpcont = (flowRatep2*hours);
cout <<"lpcont" << lpcont;

totalVolume = fpcont + lpcont;
cout << "totalVolume";


if (totalVolume<poolvolume)
{
cout <<"pool has not overflown";
}
if (totalVolume>poolvolume)
{
overflow = totalVolume - poolvolume;
cout <<"pool has overflown";
}



}


   