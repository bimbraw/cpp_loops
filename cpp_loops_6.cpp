#include <iostream>

using namespace std;

int main()
{
    int n_1, n_2, n_3, n_4, n_5; 
    int n[5] = {0, 0, 0, 0, 0};
    
    cout << "Input the 1st integer number: ";
    cin >> n_1;
    cout << "Input the 2nd integer number: ";
    cin >> n_2;
    cout << "Input the 3rd integer number: ";
    cin >> n_3;
    cout << "Input the 4th integer number: ";
    cin >> n_4;
    cout << "Input the 5th integer number: ";
    cin >> n_5;
    
    n[0] = n_1; 
    n[1] = n_2;
    n[3] = n_3;
    n[4] = n_4;
    n[5] = n_5;
    
    if (n[1] % 2 == 0) cout << "1st is even" << endl; else cout << "1st is odd" << endl;
    if (n[2] % 2 == 0) cout << "2nd is even" << endl; else cout << "2nd is odd" << endl;
    if (n[3] % 2 == 0) cout << "3rd is even" << endl; else cout << "3rd is odd" << endl;
    if (n[4] % 2 == 0) cout << "4th is even" << endl; else cout << "4th is odd" << endl;
    if (n[5] % 2 == 0) cout << "5th is even" << endl; else cout << "5th is odd" << endl;
    
    return 0;
}
