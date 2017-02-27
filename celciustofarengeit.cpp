#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
void celtofahren();
void fahrentocel();
float celcius,fahren;
int main()
{

    int choice;
    do
    {
        cout << "Enter your choice for " << "\n" << "Type 1 to convert Fahrenheit to celcius " << "\n " << "2 to convert Celcius to Fahrenheit" << "\n3 to exit\n";
        cin >> choice;
        switch(choice)
        {
            case 1 : celtofahren();break;
            case 2: fahrentocel();break;
            case 3:exit(0);

        }
    }while(choice!='3');

return 0;
    }


void celtofahren()
{
    cout << "Enter temp in celcius\n";
    cin >> celcius;
    fahren=celcius*(9/5)+32;
    cout << "The temp is " << fahren << "\n";


}
void fahrentocel()
{
    cout << "Enter temp in fahren\n";
    cin >> fahren;
    celcius=fahren*(5/9)-32;
    cout << "The temp is " << celcius << "\n";
}
