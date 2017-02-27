#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int chcount=0;
    int wdcount=1;
    char ch='a';
    cout << "Enter a phrase" ;
    while ( ch!='\r' )
    {
        ch = getche();
        if (ch = ' ' )
        wdcount++;
        else
        chcount++;

    }
    cout << "\n Words =" << wdcount << endl << "Letters = " << (chcount-1) << endl;
    return 0;

}
