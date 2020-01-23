#include <iostream>

using namespace std;

int main()
{
    int pin, user, p = 0;
    
    cout << "Enter the four digit pin: ";
    cin >> pin;
    
    if (pin > 9999)
    {
        cout << "Invalid. Try again.";
    }
    else
    {
        while(true)
        {
            cout << "User should enter their pin here: ";
            cin >> user;
            
            if(user == pin)
            {
                break;
            }
            
            else if (p < 5)
            {
                continue;
            }
            else
            {
                break;
            }
            p++;
        }
    }
    return 0;
}
