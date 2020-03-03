#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
   char a[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
   cout << (char)a[0][0] << "  " << (char)a[0][1] << "  " << (char)a[0][2] << endl ;
   cout << (char)a[1][0] << "  " << (char)a[1][1] << "  " << (char)a[1][2] << endl ;
   cout << (char)a[2][0] << "  " << (char)a[2][1] << "  " << (char)a[2][2] << endl << endl;

   int x, y, p = 0;

   for (int i = 0; i < 5; i ++)
   {
       cout << "Input x: ";
       cin >> x;
       
       if(x < 1 || x > 3)
       {
           cout << "Incorrect x! Out of range! Bye!" << endl;
           break;
       }
       
       cout << "Input y: ";
       cin >> y;
       
       if(y < 1 || y > 3)
       {
           cout << "Incorrect y! Out of range! Bye!" << endl;
           break;
       }

       system("clear");

       a[x-1][y-1] =  'X';

       cout << (char)a[0][0] << "  " << (char)a[0][1] << "  " << (char)a[0][2] << endl;
       cout << (char)a[1][0] << "  " << (char)a[1][1] << "  " << (char)a[1][2] << endl;
       cout << (char)a[2][0] << "  " << (char)a[2][1] << "  " << (char)a[2][2] << endl << endl;
       
       p = p + 1;
       
       if(p > 8)
       {
           break;
       }

       cout << "Input x: ";
       cin >> x;
       
       if(x < 1 || x > 3)
       {
           cout << "Incorrect x! Out of range! Bye!" << endl;
           break;
       }
       
       cout << "Input y: ";
       cin >> y;

       if(y < 1 || y > 3)
       {
           cout << "Incorrect y! Out of range! Bye!" << endl;
           break;
       }
       
       system("clear");

       a[x-1][y-1] =  'O';
       
       cout << (char)a[0][0] << "  " << (char)a[0][1] << "  " << (char)a[0][2] << endl;
       cout << (char)a[1][0] << "  " << (char)a[1][1] << "  " << (char)a[1][2] << endl;
       cout << (char)a[2][0] << "  " << (char)a[2][1] << "  " << (char)a[2][2] << endl << endl;
       
       p = p + 1;
       
   }
}
