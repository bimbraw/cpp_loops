#include <iostream>

using namespace std;

int main()
{
    double val, power, value;
    
    cout << "Input the number: ";
    cin >> val;
    
    cout << "Input the power: ";
    cin >> power;
    
    value = val;
    
    for (int i = 0; i < power - 1; i ++)
    {
        val = value * val;
    }
    
    cout << val << endl;
    
    return 0;
}
