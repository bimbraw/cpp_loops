#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
   char a[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
   cout << (char)a[0][0] << "    " << (char)a[0][1] << "    " << (char)a[0][2] << endl << endl << endl;
   cout << (char)a[1][0] << "    " << (char)a[1][1] << "    " << (char)a[1][2] << endl << endl << endl;
   cout << (char)a[2][0] << "    " << (char)a[2][1] << "    " << (char)a[2][2] << endl << endl << endl;
   
   int x, y;
   
   for (int i = 0; i < 5; i ++)
   {
       cout << "Input x: ";
       cin >> x;
       cout << "Input y: ";
       cin >> y;
       
       if(x <= 0 && x > 3)
       {
           cout << "Wrong! Enter again. Input x: ";
           cin >> x;
       }
       
       if(y <= 0 && y > 3)
       {
           cout << "Wrong! Enter again. Input y: ";
           cin >> y;
       }
   
       system("clear");
   
       a[x-1][y-1] =  'X';
       
       cout << (char)a[0][0] << "    " << (char)a[0][1] << "    " << (char)a[0][2] << endl << endl << endl;
       cout << (char)a[1][0] << "    " << (char)a[1][1] << "    " << (char)a[1][2] << endl << endl << endl;
       cout << (char)a[2][0] << "    " << (char)a[2][1] << "    " << (char)a[2][2] << endl << endl << endl;
       
       cout << "Input x: ";
       cin >> x;
       cout << "Input y: ";
       cin >> y;
       
       if(x <= 0 && x > 3)
       {
           cout << "Wrong! Enter again. Input x: ";
           cin >> x;
       }
       
       if(y <= 0 && y > 3)
       {
           cout << "Wrong! Enter again. Input y: ";
           cin >> y;
       }
       
       system("clear");
       
       a[x-1][y-1] =  'O';
       
       cout << (char)a[0][0] << "    " << (char)a[0][1] << "    " << (char)a[0][2] << endl << endl << endl;
       cout << (char)a[1][0] << "    " << (char)a[1][1] << "    " << (char)a[1][2] << endl << endl << endl;
       cout << (char)a[2][0] << "    " << (char)a[2][1] << "    " << (char)a[2][2] << endl << endl << endl;
   }
}
