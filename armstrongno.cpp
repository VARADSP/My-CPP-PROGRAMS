#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int i,j,k=0;
    int orignalnumber;
    cout << "Enter a number";
    cin >> orignalnumber;
    i=orignalnumber;
    while(orignalnumber>0)
    {
        j=orignalnumber%10;
        k=k+(j*j*j);
        orignalnumber=orignalnumber/10;
    }
    if(k==i)
    {
        cout << "Its a armstrong number \n";

    }
    else
    {
        cout << "Its not";
    }
          return 0;
}

