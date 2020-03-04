#include <stdio.h>
#include <iostream>
using namespace std;

int x, y, p = 0;

int main()
{
    cout << "Enter the number: ";
    cin >> x;
    
    for(int i = 1; i < x+1; i++)
    {
        if(i % 2 != 0)
        {
            continue;
        }
        else
        {
            p = p + i;
        }
    }
    
    cout << "The final output is: " << p << endl;
}
