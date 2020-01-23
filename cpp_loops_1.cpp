#include <iostream>

using namespace std;

int main()
{
    int val;
    
    cout << "What's the integer? ";
    cin >> val;
    
    for (int i = 0; i < 100; i ++)
    {
        cout << val + i << endl;
    }
    
    return 0;
}
