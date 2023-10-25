#include <iostream>

using namespace std;

int main()
{
    int value;
    cout << "Enter how much points you would like to see\n";
    cin >> value;

    for (int i = 0; i < value;i++) 
    {
        cout << i + 1 << ".\n";
    }

}