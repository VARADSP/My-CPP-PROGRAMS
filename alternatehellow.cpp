#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>

using namespace std;
int main()
{
    char data[256];
    int i=0;

    cout << "Enter your string\n";
    while((data[i]=getche())!='\r')
    {

        i++;
    }



data[strlen(data)-1]='\0';

    cout << "Characters at odd postion\n";
i=0;
    while(data[i]!='\0')
    {
        if(i%2==0)
        {
            cout << data[i] << "\n";
        }

    i++;
    }
    cout << "\n";

    return 0;






}
