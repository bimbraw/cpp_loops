#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int number, number_1, sum = 0;
    
    cout << "Enter an integer number: ";
    cin >> number;
    
    int a[number] = {};
    
    if (number%2 == 0)
    {
        number_1 = number/2;
        int a_1[number_1] = {};
        
        a_1[0] = 0;
        
        
        for(int i = 0; i < number+1; i++)
        {
            a[i-1] = i;
            
            if(a[i-1] % 2 == 0)
            {
                a_1[i-1] = a_1[i-1] + a[i-1];
                cout << a[i-1];
            }
            else
            {
                continue;
            }
            cout << a[i-1] + a[i+1] + a[i+3] << endl;
            
        }
    }
    else
    {
        number_1 = number/2 + 1;
        int a_1[number_1] = {};
        for(int i = 1; i < number+1 ; i++)
        {
            a[i-1] = i;
            cout << a[i-1];
            if(a[i-1] % 2 == 0)
            {
                a_1[i-1] = a[i-1];
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}
