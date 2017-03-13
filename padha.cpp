#include<iostream>
using namespace std;
#include<conio.h>
#include<iomanip>
int main()
{
    int i,j=0,k;
    int c;
    cout << "Enter a number";
    cin >> i;
    for(k=1;k<11;k++)
    {
        c=i*k;
        cout<< c << setw(7);
        if(k==10)
        {
            cout << "\n";
            for(k=11;k<21;k++)
            {
                c=i*k;
                cout << c << setw(7);
                if(k==20)
                {
                    cout << "\n";
                    for(k=21;k<31;k++)
                    {
                        c=i*k;
                        cout << c << setw(7);
                    }
                }
            }

        }


    }
    return 0;


}
