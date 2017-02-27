//if-else program
#include<iostream>
using namespace std;
int main()
{
    char ch='y';
    int x;
    while(ch=='y')
    {
    cout << "Enter a number ";
    cin >> x;
        if ( x > 100)
            cout << "The Number entered is " << '\t' << x << '\t' << "greater than 100 " << '\n';
        else
            cout << "The number is less than 100" << '\n';
    cout << "Wanna Go again (y/n)" << '\n';
    cin >> ch;
    }
}
