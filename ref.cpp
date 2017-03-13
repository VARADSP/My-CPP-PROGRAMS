//demo for passing by reference
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{

    void intfrac(float,float &,float &);
    float number,intpart,fracpart;
    char ch;

    do {
        cout << "\nEnter a real number ";
        cin >> number ;
        intfrac(number,intpart,fracpart);
        cout << "Integer part is " << intpart << "."  << "Fractonal part is " << fracpart << endl;
        if(getche() == '\r')
        {
            break;
        }


    }while(number != 0.0);
    return 0;

}
//intfract()
//finds integer and fractional parts of real number
void intfrac(float n,float &intp,float &fracp)
{
    long temp=static_cast<long>(n);
    intp=static_cast<float>(temp);
    fracp = temp-n;

}
