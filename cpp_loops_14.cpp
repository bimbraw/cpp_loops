#include <stdio.h>
#include <iostream>
using namespace std;

int x, p = 0;
char y;

int main()
{
    while(true)
    {
        cout << "Enter the number: ";
        cin >> x;
        
        for(int i = 0; i < x + 1; i++)
        {
            p = p + i;
        }
        
        cout << "Current sum is: " << p << endl;
        
        cout << "Do you want to add the next number (y/Y/n/N)? ";
        cin >> y;
        
        if(y == 'y' || y == 'Y')
        {
            p = p + x + 1;
            cout << "Final output is: " << p << endl;
            break;
        }
        
        else if(y == 'n' || y == 'N')
        {
            p = p + 1;
            
            cout << "Final output (incremented by 1): " << p << endl;
            
            p = 0;
            
            continue;
        }
        
        else
        {
            cout << "Bye!";
            break;
        }
    }
}
