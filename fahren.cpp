//farhen.cpp
//demonstrates cin,newline
#include <iostream>
using namespace std;
int main()
{
    int ftemp,ftemp2;
    cout << "Enter temperature in farhenheit :";
    cin >> ftemp >> ftemp2;
    int ctemp = (ftemp-32)*5/9;
    int ctemp2 = (ftemp2-32)*5/9;
    cout << "Equivalent in celciuis is:" << ctemp << ctemp2 << "\n";
    return 0;

}
