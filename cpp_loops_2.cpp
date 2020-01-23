#include <iostream>

using namespace std;

int main()
{
    int val;
    
    cout << "Lowercase: " << endl;
    
    for (char letter = 'a'; letter <= 'z';  letter++)
    {
        cout << letter << endl;
    }
    
    cout << endl;
    cout << "Uppercase: " << endl;
    
    for (char letter = 'A'; letter <= 'Z';  letter++)
    {
        cout << letter << endl;
    }
    
    return 0;
}
