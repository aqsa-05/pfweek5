#include <iostream>
#include <cmath>
using namespace std;
main ()
{

float degree;
float base;
float height;
float radian = 57.2958;
float degreeRadian;
float angle;

cout << "Enter degree:";
cin >> degree;
cout << "Enter base:";
cin >> base;
degreeRadian = degree/57.2958;
angle = tan (degreeRadian);

cout <<"angle" << angle << endl;
height = base*angle;
cout << "height of tree is" << height << endl;
}
