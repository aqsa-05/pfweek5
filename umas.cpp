#include <iostream>
using namespace std;
void uams();
void menu();


main()
{
int ecatMarks1;
int ecatMarks2;
int choice;
string key;
int rollNo1;
int rollNo2;
while (true)
{uams();
menu();

cout <<"Enter choice:";
cin >> choice;

if (choice ==1)
   {
     system("cls");
   
string stname1;
int matricMarks1;
int interMarks1;
int ecatMarks1;
float aggregate;

cout <<"Enter name of st1:";
cin >> stname1;
cout << "Enter matricMarks1:";
cin >> matricMarks1;
cout << "Enter interMarks1:";
cin >> interMarks1;
cout << "Enter ecatMarks1:";
cin >> ecatMarks1;
aggregate = (0.3*matricMarks1/1100+ 0.3*interMarks1/550 + 0.4*ecatMarks1/400)*100;
cout << "aggregate is" << aggregate << endl;
cout <<"press any key to continue" << endl;
cin >> key;
     }


if (choice ==2)
  {
   system("cls");
   
string stname2;
int matricMarks2;
int interMarks2;
int ecatMarks2;
float aggregate;

cout <<"Enter name of st2:";
cin >> stname2;
cout << "Enter matricMarks2:";
cin >> matricMarks2;
cout << "Enter interMarks2:";
cin >> interMarks2;
cout << "Enter ecatMarks2:";
cin >> ecatMarks2;
aggregate = (0.3*matricMarks2/1100+ 0.3*interMarks2/550 + 0.4*ecatMarks2/400)*100;
cout << "aggregate is" << aggregate << endl;
cout <<"press any key to continue" << endl;
cin >> key;

     }

if (choice ==3)
{if (ecatMarks1> ecatMarks2)
   {
     system("cls");
     cout <<" stname1 has rollNo1"<< endl;
      cout <<"press any key to continue" << endl;
      cin >> key;}

if (ecatMarks1<ecatMarks2)
{ 
system ("cls");
 cout <<"stname2 has rollNo2" <<endl;
 cout <<"press any key to continue" << endl;
cin >> key;}
}  


 
}


}


void uams()
{
cout <<"      ***********************************                 " << endl;
cout <<"      *                                 *                 " << endl;  
cout <<"      *   university admission          *                 " << endl;
cout <<"      *    management system            *                 " << endl;
cout <<"      *                                 *                 " << endl;
cout <<"      *                                 *                 " << endl;
cout <<"      *                                 *                 " << endl;
cout <<"      ***********************************                 " << endl;
cout <<"    WELCOME TO UET ADMISSION MANAGEMENT SYSTEM            " << endl;
}



void menu()
{
cout <<" press1 to enter details of stname1             " << endl;
cout <<" press2 to enter details of stname2             " << endl;
cout <<" press3 to display rollNo of stname             " << endl;
}



    







